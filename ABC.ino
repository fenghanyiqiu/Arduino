int ledPin = 13;
void setup(){
  pinMode(ledPin,OUTPUT);
}
void LONG(){
  digitalWrite(ledPin,HIGH);
    delay(400);
    digitalWrite(ledPin,LOW);
    delay(100);
}
void SHORT(){
  digitalWrite(ledPin,HIGH);
    delay(150);
    digitalWrite(ledPin,LOW);
    delay(100);
}
void SPACE(){
  digitalWrite(ledPin,LOW);
    delay(450);
}
void OVER(){
  digitalWrite(ledPin,LOW);
    delay(2000);
  }
void characterA(){
  SHORT();
  LONG();
}
void characterB(){
  LONG();
  SHORT();
  SHORT();
  SHORT();
}
void characterC(){
  LONG();
  SHORT();
  LONG();
  SHORT();
}
void characterD(){
  LONG();
  SHORT();
  SHORT();
}
void characterE(){
  SHORT();
}
void characterF(){
  SHORT();
  SHORT();
  LONG();
  SHORT();
}
void characterG(){
  LONG();
  LONG();
  SHORT();
}
void characterH(){
  SHORT();
  SHORT();
  SHORT();
  SHORT();
}
void characterI(){
  SHORT();
  SHORT();
}
void characterJ(){
  SHORT();
  LONG();
  LONG();
  LONG();
}
void characterK(){
  LONG();
  SHORT();
  LONG();
}
void characterL(){
  SHORT();
  LONG();
  SHORT();
  SHORT();
}
void characterM(){
  LONG();
  LONG();
}
void characterN(){
  LONG();
  SHORT();
}
void characterO(){
  LONG();
  LONG();
  LONG();
}
void characterP(){
  SHORT();
  LONG();
  LONG();
  SHORT();
}
void characterQ(){
  LONG();
  LONG();
  SHORT();
  LONG();
}
void characterR(){
  SHORT();
  LONG();
  SHORT();
}
void characterS(){
  SHORT();
  SHORT();
  SHORT();
}
void characterT(){
  LONG();
}
void characterU(){
  SHORT();
  SHORT();
  LONG();
}
void characterV(){
  SHORT();
  SHORT();
  SHORT();
  LONG();
}
void characterW(){
  SHORT();
  LONG();
  LONG();
}
void characterX(){
  LONG();
  SHORT();
  SHORT();
  LONG();
}
void characterY(){
  LONG();
  SHORT();
  LONG();
  LONG();
}
void characterZ(){
  LONG();
  LONG();
  SHORT();
  SHORT();
}
void loop(){
  characterH();
  SPACE();
  characterE();
  SPACE();
  characterL();
  SPACE();
  characterL();
  SPACE();
  characterO();
  OVER();
}

