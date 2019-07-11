//Project Padzbot #1 HEXA
//Thanks to K&R project for giving me a refrence UwU

const int indicatorpin=13; //GIVE THIS PIN A FUCKING LED!!!
const int soundpin=A2; //sensor analog output
const float threshold=11.2; //value for sound sensor,,,this is for analog output, just change the pin in sensor module for digital output
void setup() {Serial.begin(9600);
              pinMode(indicatorpin,OUTPUT);
                      (soundpin,INPUT);
}
void loop() {int soundsens=analogRead(soundpin);  //soundpin receive analog serial output from sensor
               Serial.println(soundsens);
            if (soundsens>=threshold)
               {digitalWrite(indicatorpin,HIGH); //turns led on
                delay(500);
}
                 else{digitalWrite(indicatorpin,LOW); //led off after delay if soundsens>=threshold
}}
