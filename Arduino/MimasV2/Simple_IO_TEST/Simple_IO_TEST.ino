/*
* Test for Mimas IO pins, test prints hello on serial, press a button to light a led, or change switch to light 7 segment LEDs
*/

void setup() {
  // LEDs 
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  // 7 segment LEDs 
  pinMode(24, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  // Buttons 
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  // Switches
  pinMode(16, INPUT);
  pinMode(17, INPUT);
  pinMode(18, INPUT);
  pinMode(19, INPUT);
  pinMode(20, INPUT);
  pinMode(21, INPUT);
  pinMode(22, INPUT);
  pinMode(23, INPUT);
  Serial.begin(19200);

}

void loop() {
  Serial.println("hello");
  delay(100);
  for (int i = 0;i<6;i++){
    if (digitalRead(i)){
    digitalWrite(i+8, LOW);   
    }
    else{
      digitalWrite(i+8, HIGH);   
      }
    }
  for (int i = 16;i<24;i++){
    if (digitalRead(i)){
    digitalWrite(i+8, HIGH);  
    }
    else{
      digitalWrite(i+8, LOW);  
      }
  }    
  }
