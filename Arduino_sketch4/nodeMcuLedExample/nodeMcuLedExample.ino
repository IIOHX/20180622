#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>

ESP8266WebServer server(80);

const int pinLed = D6;

const char* ssid     = "edgeilab";//WIFI 이름
const char* password = "iotiotiot";//WIFI 비밀번호

void setup() {
  Serial.begin(115200);
  pinMode(pinLed, OUTPUT);
  delay(1000);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.print("Connecting to ");
  Serial.println(ssid);
  Serial.println(WiFi.SSID());
  Serial.println(WiFi.localIP());
 if (MDNS.begin("esp8266")) {

    Serial.println("MDNS responder started");

  }
  //접속별 동작 설정
  server.on("/", [](){
    server.send(200, "text/html", "<h1>ESP8266 LED</h1><a href=\"/off\"><h1>OFF</h1></a><a href=\"/on\"><h1>ON</h1></a>");
  });
  server.on("/on", [](){//ON 으로 접속시 LED를 켭니다.
    digitalWrite(pinLed, HIGH);
    server.send(200, "text/html", "<a href=\"/off\"><h1>OFF</h1></a>");
  });
  server.on("/off", [](){//OFF 으로 접속시 LED를 끕니다.
    digitalWrite(pinLed, LOW);
    server.send(200, "text/html", "<a href=\"/on\"><h1>ON</h1></a>");
  });
  //서버 사용을 시작합니다.
  server.begin();
  Serial.println("HTTP server started");
}

void loop(void){
  server.handleClient();//클라이언트 접속을 관리합니다.
}

