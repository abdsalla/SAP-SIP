int Rawsolarvalue;
int Solarvalue;
int Reading1;
int Reading2;
int Reading3;
int Reading4;
int Reading5;
int Summedvalue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(4800);
}

void loop() {
  // put your main code here, to run repeatedly:
//  Rawsolarvalue = analogRead(A0);
  for (int i=0; i <= 6; i++){
     Rawsolarvalue = analogRead(A0);
     switch (i){
      case 1:  Reading1 = Rawsolarvalue;
        break;
      case 2:  Reading2 = Rawsolarvalue;
        break;
      case 3:  Reading3 = Rawsolarvalue;
        break;
      case 4:  Reading4 = Rawsolarvalue;
        break;
      case 5:  Reading5 = Rawsolarvalue;
        break;
      default: break;
      }
   
     // delay(10);
   }
   Summedvalue = Reading1 + Reading2 + Reading3 + Reading4 + Reading5;
   Solarvalue = Summedvalue / 5;
   Serial.println(Solarvalue);
}
