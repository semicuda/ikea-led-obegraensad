#include "webserver.h"

#ifdef ENABLE_SERVER

AsyncWebServer server(80);

void initWebServer()
{
  DefaultHeaders::Instance().addHeader("Access-Control-Allow-Headers", "Accept, Content-Type, Authorization");
  DefaultHeaders::Instance().addHeader("Access-Control-Allow-Credentials", "true");
  DefaultHeaders::Instance().addHeader("Access-Control-Allow-Origin", "*");

  server.on("/", HTTP_GET, startGui);
  server.onNotFound([](AsyncWebServerRequest *request)
                    { request->send(404, "text/plain", "Page not found!"); });

   // Route to handle "/message?text=" URL
  server.on("/message", HTTP_GET, handleMessage);                  

  server.begin();
}

#endif
