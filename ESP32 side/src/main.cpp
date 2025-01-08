#include <WiFi.h>

//PWM global values
const int gpio_pin4 = 13;  // 21 corresponds to GPIO21
const int gpio_pin3 = 12;
const int gpio_pin2 = 14;  // 21 corresponds to GPIO21
const int gpio_pin1 = 27;

// PWM properties
const int freq = 5000;
const int pwm_channel1 = 1;
const int pwm_channel2 = 0;
const int pwm2_channel1 = 3;
const int pwm2_channel2 = 2;
const int pwm_resolution = 8; //no of bits for duty cycle value


//wifi global values
const char* ssid     = "ESP_12D9F2"; // wifi SSID of your esp wifi // ESP_12D9F2
const char* password = "12345678"; // wifi password of your esp wifi

const char*  host_ip = "192.168.4.1"; // IPv4 you assigned to the server
const int wifi_port = 80; // Change this to connection port created by server
const String channelID  = "1"; // Change this to the channel ID created

WiFiClient client;

//function declaration
void pwm_config(void);
void wifi_config(void);
String readResponse(WiFiClient *client);

void setup() {
  
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(BUILTIN_LED, HIGH);
  // pwm_config();
  // wifi_config();
  digitalWrite(BUILTIN_LED, LOW);
  delay(2000);
}

void loop() {
  String car_sig;
  
	if (client.connected()) {
    // message you want to send
    client.print("connected ");
    delay(1000); 
  } else {
    Serial.println("Connection to server lost. Reconnecting...");
    client.connect(host_ip, wifi_port);
  }
  
  digitalWrite(BUILTIN_LED, WiFi.status() == WL_CONNECTED);

  car_sig = readResponse(&client);
  Serial.println(car_sig);

  if (car_sig == "left"){
    for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle+=50){
        // Left
        ledcWrite(pwm_channel1, dutyCycle);//used to set pwm cycle 
        ledcWrite(pwm_channel2, 255-dutyCycle);
        ledcWrite(pwm2_channel1, 0);//used to set pwm cycle 
        ledcWrite(pwm2_channel2, 0);
        delay(15);
    } 
  }
  
  else if (car_sig == "right"){
    for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle+=50){
        // Right
        ledcWrite(pwm_channel1, 0);//used to set pwm cycle 
        ledcWrite(pwm_channel2, 0);
        ledcWrite(pwm2_channel1, 255-dutyCycle);//used to set pwm cycle 
        ledcWrite(pwm2_channel2, dutyCycle);
        delay(15);
    }
  }
  
  else if (car_sig == "front"){
    for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle+=50){
        // Forward
        ledcWrite(pwm_channel1, dutyCycle); 
        ledcWrite(pwm_channel2, 0);
        ledcWrite(pwm2_channel1, 0);//used to set pwm cycle 
        ledcWrite(pwm2_channel2, dutyCycle);  
        delay(15);  
        delay(15);
    }
  }
  else if (car_sig == "back"){
    for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle+=50){
        // Backward
        ledcWrite(pwm_channel1, 0); 
        ledcWrite(pwm_channel2, dutyCycle);
        ledcWrite(pwm2_channel1, dutyCycle);//used to set pwm cycle 
        ledcWrite(pwm2_channel2, 0);
        delay(15);
    }
  }
  else if (car_sig == "stop"){
    for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle+=50){
        // Stop
        ledcWrite(pwm_channel1, 0); 
        ledcWrite(pwm_channel1, 0);
        ledcWrite(pwm2_channel2, 0);//used to set pwm cycle 
        ledcWrite(pwm2_channel2, 0);  
        delay(15);
    }
  }
  car_sig = "";
}

void pwm_config(void){
  // configure LED PWM functionalitites
  ledcSetup(pwm_channel1, freq, pwm_resolution);
  ledcSetup(pwm_channel2, freq, pwm_resolution);
  ledcSetup(pwm2_channel1, freq, pwm_resolution);
  ledcSetup(pwm2_channel2, freq, pwm_resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(gpio_pin1, pwm_channel1);
  ledcAttachPin(gpio_pin2, pwm_channel2);
  ledcAttachPin(gpio_pin3, pwm2_channel1);
  ledcAttachPin(gpio_pin4, pwm2_channel2);
}

void wifi_config(void){
  /*String readRequest = "GET /channels/" + channelID +
                       "Host: " + host_ip + "\r\n" ;*/
  // connecting to esp01 WiFi network
    Serial.println();
    Serial.println("******************************************************");
    Serial.print("Connecting to ");
    Serial.println(ssid);

    //wifi station mode
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid);//, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
  
  client.connect(host_ip, wifi_port);
  if (!client.connect(host_ip, wifi_port)) {
    return;
  }
  
  Serial.println("Client connected");
  //client.print(readRequest);
  
  if (!client.connect(host_ip, wifi_port)) {
    return;
  }
}

String readResponse(WiFiClient *client){
  unsigned long timeout = millis();
  while(client->available() == 0){
    if(millis() - timeout > 5000){
      client->stop();
      return ">>> Client Timeout !";
    }
  }

  // Read all the lines of the reply from server and print them to Serial
  while(client->available()) {
    String line = client->readStringUntil('\r');
    return line;
  }

 return "\nClosing connection\n\n";
}