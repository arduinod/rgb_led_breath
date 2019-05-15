int val = 0;
char group[3]={11,10,9};

void setup() {
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {
//  analogWrite(9, val);  // sets the value of PWM pin 29
//  val = (val + 1) % 255;    // increment value and keep it in 
                           // the 0-255 range.
//  delay(10);
//  Serial.println(val);
  for (char j=0; j<=2; j++) {
    switch(group[j]) {
      case 11:
              Serial.println("红色渐变！");
              break;
      case 10:
              Serial.println("蓝色渐变！");
              break;
      case 9:
              Serial.println("绿色渐变！");
              break;
    }
    
    for(int i = 0;i<=255;i++) {
      analogWrite(group[j],i);
      delay(5);
    }
    for(int i = 255;i>=0;i--) {
      analogWrite(group[j],i);
      delay(5);
    }
  }
//  Serial.println("循环完！");
}
