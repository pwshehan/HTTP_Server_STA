#include <Arduino.h>

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

#include <../env.h> // Environment file

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(ssid);
  // put your main code here, to run repeatedly:
}