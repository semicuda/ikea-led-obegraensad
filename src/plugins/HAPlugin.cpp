#include "plugins/HAPlugin.h"
#include "secrets.h"

// https://github.com/chubin/wttr.in/blob/master/share/translations/en.txt
#ifdef ESP8266
WiFiClient wiFiClient;
#endif

void HAPlugin::setup()
{
    // loading screen
    Screen.clear();
    currentStatus = LOADING;
    Screen.setPixel(4, 7, 1);
    Screen.setPixel(5, 7, 1);
    Screen.setPixel(7, 7, 1);
    Screen.setPixel(8, 7, 1);
    Screen.setPixel(10, 7, 1);
    Screen.setPixel(11, 7, 1);
    this->lastUpdate = millis();
    this->update();
    currentStatus = NONE;
}

void HAPlugin::loop()
{
    if (millis() >= this->lastUpdate + (1000 * 30))
    {
        this->update();
        this->lastUpdate = millis();
        Serial.println("updating HA");
    };
}

void HAPlugin::update()
{
    
#ifdef ESP32
    String auth_header = "Bearer " + HAApiKey;
    http.begin(HAApiString);
    http.addHeader("Authorization", auth_header);
    http.addHeader("content-type", "application/json");
#endif
#ifdef ESP8266
    http.begin(wiFiClient, HAApiString);
#endif

/*
{
    "entity_id": "sensor.stromzaehler_leistung_wp2",
    "state": "1358.57",
    "attributes": {
        "state_class": "measurement",
        "unit_of_measurement": "W",
        "device_class": "power",
        "friendly_name": "stromzaehler_leistung_wp2"
    },
    "last_changed": "2023-12-03T10:43:27.027686+00:00",
    "last_updated": "2023-12-03T10:43:27.027686+00:00",
    "context": {
        "id": "01HGQMD85K3490YAXHW86XNPH9",
        "parent_id": null,
        "user_id": null
    }
}
*/


    int code = http.GET();

    if (code == HTTP_CODE_OK)
    {
        DynamicJsonDocument doc(2048);
        deserializeJson(doc, http.getString());

        int power = round(doc["state"].as<float>());
        int iconY = 1;
        int tempY = 1;
        int textY = 9;

        Screen.clear();

        if (power < 1000)
        {
            Screen.drawNumbers(1, tempY, {power / 100 % 10, power / 10 % 10, power % 10});
            Screen.drawCharacter(5, textY, Screen.readBytes(system6x7[55]), 8); //W
        }
        else
        {
            int kPow = power / 1000 % 10;
            //int h1Pow = power / 100 % 10;
            //int h2Pow = power / 10 % 10;
            int hPow = round((power / 100 % 10) + ((power / 10 % 10) * 0.1));

            Screen.drawCharacter(0, tempY, Screen.readBytes(system6x7[kPow+16]), 8);
            //Screen.drawCharacter(6, tempY, Screen.readBytes(system6x7[14]), 8);
            Screen.drawCharacter(9, tempY, Screen.readBytes(system6x7[hPow+16]), 8);
            Screen.setPixel(7,6,255);
            Screen.setPixel(7,7,255);
            //Screen.drawNumbers(1, tempY, {(power - power % 1000)/1000});
            //Screen.drawNumbers(8, tempY, {((power % 1000)/100)});
            Screen.drawCharacter(1, textY, Screen.readBytes(system6x7[75]), 8); //k
            Screen.drawCharacter(8, textY, Screen.readBytes(system6x7[55]), 8); //W
        }
    }
}

const char *HAPlugin::getName() const
{
    return "HomeAssistant";
}
