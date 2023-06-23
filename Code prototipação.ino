#include "dht.h" // Bibioteca do Sensor de Temperatura
#include <WiFi.h>
#include <PubSubClient.h>

//const char* ssid = "Galhardi";
//char* password =  "G@lh@rd1";
const char* ssid = "ifsp-ibge-1";
char* password =  "ifspcatanduva";


// MQTT Broker
//const char *mqtt_broker = "broker.hivemq.com";
//const char *mqtt_username = "";
//const char *mqtt_password = "";
//const int mqtt_port = 1883;

// MQTT Broker
const char *mqtt_broker = "3.145.183.78";
const char *mqtt_username = "julio";
const char *mqtt_password = "julio";
const int mqtt_port = 1883;

WiFiClient espClient;
PubSubClient client(espClient);

const int pinoDHT11 = 23;
dht DHT;
unsigned long now = 0;

void setup() {
  Serial.begin(115200);
  pinMode(pinoDHT11, INPUT);

}

void conexao(){
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi..");
  }

  Serial.println("Connected to the WiFi network");
  //client.setServer("broker.hivemq.com", 1883);
  client.setServer(mqtt_broker, mqtt_port);

  while (!client.connected()) {
    String client_id = "esp32-client-";
    client_id += String(WiFi.macAddress());
    //Serial.printfln("The client ID : %s", client_id.c_str());
    if (client.connect(client_id.c_str(),mqtt_username, mqtt_password)) {
      Serial.println("connected");
    } else {
      Serial.print("failed with state ");
      Serial.print(client.state());
      delay(2000);
    }
  }  
  
}

void loop() 
{    
  DHT.read11(pinoDHT11);
  now = millis();
  /*Serial.println("______________");
  Serial.print("Temperatura: "); 
  Serial.println(DHT.temperature, 0);
  Serial.print("Humidade: ");
  Serial.print(DHT.humidity);
  Serial.println("%");*/
  
  conexao();
  client.publish("topic/jeanjulio_temperatura", String(DHT.temperature).c_str());
  client.publish("topic/jeanjulio_humidade", String(DHT.humidity).c_str());
  
  while(millis() < now + (1000*60*1)){
    
  }
}
