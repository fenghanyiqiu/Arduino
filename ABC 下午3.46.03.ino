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
  String WORD = "Nice";
  for(int i=0;i<WORD.length();i++){
    if(WORD[i]=='a'||WORD[i]=='A'){
      characterA();
    }
    if(WORD[i]=='b'||WORD[i]=='B'){
      characterB();
    }
    if(WORD[i]=='c'||WORD[i]=='C'){
      characterC();
    }
    if(WORD[i]=='d'||WORD[i]=='D'){
      characterD();
    }
    if(WORD[i]=='e'||WORD[i]=='E'){
      characterE();
    }
    if(WORD[i]=='f'||WORD[i]=='F'){
      characterF();
    }
    if(WORD[i]=='g'||WORD[i]=='G'){
      characterG();
    }
    if(WORD[i]=='h'||WORD[i]=='H'){
      characterH();
    }
    if(WORD[i]=='i'||WORD[i]=='I'){
      characterI();
    }
    if(WORD[i]=='j'||WORD[i]=='J'){
      characterJ();
    }
    if(WORD[i]=='k'||WORD[i]=='K'){
      characterK();
    }
    if(WORD[i]=='l'||WORD[i]=='L'){
      characterL();
    }
    if(WORD[i]=='m'||WORD[i]=='M'){
      characterM();
    }
    if(WORD[i]=='n'||WORD[i]=='N'){
      characterN();
    }
    if(WORD[i]=='o'||WORD[i]=='O'){
      characterO();
    }
    if(WORD[i]=='p'||WORD[i]=='P'){
      characterP();
    }
    if(WORD[i]=='q'||WORD[i]=='Q'){
      characterQ();
    }
    if(WORD[i]=='r'||WORD[i]=='R'){
      characterR();
    }
    if(WORD[i]=='s'||WORD[i]=='S'){
      characterS();
    }
    if(WORD[i]=='t'||WORD[i]=='T'){
      characterT();
    }
    if(WORD[i]=='u'||WORD[i]=='U'){
      characterU();
    }
    if(WORD[i]=='v'||WORD[i]=='V'){
      characterV();
    }
    if(WORD[i]=='w'||WORD[i]=='W'){
      characterA();
    }
    if(WORD[i]=='x'||WORD[i]=='X'){
      characterA();
    }
    if(WORD[i]=='y'||WORD[i]=='Y'){
      characterA();
    }
    if(WORD[i]=='z'||WORD[i]=='Z'){
      characterZ();
    }
    SPACE();
   }
   OVER();
}

