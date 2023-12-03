#pragma once

#ifdef ESP32
#include <HTTPClient.h>
#endif
#ifdef ESP8266
#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#endif
#include "secrets.h"
#include <ArduinoJson.h>
#include "PluginManager.h"

class HAPlugin : public Plugin
{
private:
  unsigned long lastUpdate = 0;
  HTTPClient http;

  String HAApiString = "http://homeassistant.lan:8123/api/states/sensor.stromzaehler_leistung_wp2";
  String HAApiKey = HA_API;

  int lastPower = 0;
  int lasthPow = 0;
  int lastkPow = 0;

public:
  void update();
  void setup() override;
  void loop() override;
  const char *getName() const override;
};
