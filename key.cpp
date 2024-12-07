#define BLYNK_TEMPLATE_ID "TMPL3Fq4dM4HW"
#define BLYNK_TEMPLATE_NAME "Key Finder"
#define BLYNK_AUTH_TOKEN "fuaYxyE4XnJXVpbGnKePpxPloJm9t9bL"

#include <BlynkSimpleEsp8266.h>  // Use BlynkSimpleEsp32.h for ESP32

char auth[] = BLYNK_AUTH_TOKEN;   // Auth Token from the Blynk App
char ssid[] = "Acer";      // WiFi network name
char pass[] = "12345678";  // WiFi password


//Get the button value
BLYNK_WRITE(V0) {
  digitalWrite(D1, param.asInt());
}

void setup() {
  //Set the LED pin as an output pin
  pinMode(D1, OUTPUT);
  //Initialize the Blynk library
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  //Run the Blynk library
  Blynk.run();
}
