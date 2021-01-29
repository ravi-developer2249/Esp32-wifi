     
#include <WiFi.h>;
const char* SSID ="Ravi";
const char* PASSWORD = "ravindra";
const int Wifi_Led_Indicator=2 ;
void setup() {
  pinMode(Wifi_Led_Indicator,OUTPUT);
   
  Serial.begin(115200); // Initialize serial communications with the PC
  while (!Serial); // Do nothing if no serial port is opened (added for Arduinos based on ATMEGA32U4)
   
  WiFi.begin(SSID,PASSWORD);
  Serial.print("Connecting ESP32 to Access Point:");
  Serial.print(SSID);
   
  while (WiFi.status() != WL_CONNECTED)
{
  digitalWrite(Wifi_Led_Indicator,HIGH);
  delay(100);
  digitalWrite(Wifi_Led_Indicator,LOW);
  delay(100);
  Serial.print(".");
  delay(500);
}
Serial.print(" ESP32 connected to Access Point :");
Serial.print(SSID);
Serial.print("\n");
digitalWrite(Wifi_Led_Indicator,HIGH);
}
 void loop() 
{
  if(WiFi.status() != WL_CONNECTED)
  
{
  Serial.print("ESP32 Disconnected from Access point :");
  Serial.print(SSID);
  Serial.print("\n");
  Serial.print("Connecting ESP32 to Access Point:");
  Serial.print(SSID);
   WiFi.begin(SSID,PASSWORD);
  while (WiFi.status() != WL_CONNECTED)
{
  digitalWrite(Wifi_Led_Indicator,HIGH);
  delay(100);
  digitalWrite(Wifi_Led_Indicator,LOW);
  delay(100);
  Serial.print(".");
  delay(500);
  }
Serial.print("\n");
Serial.print(" ESP32 connected to Access Point :");
Serial.print(SSID);
Serial.print("\n");
digitalWrite(Wifi_Led_Indicator,HIGH);
}
 }
 
 
 
