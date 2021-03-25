int pinA=12;
int pinB=11;
int pinC=8;
int pinD=9;
int pinE=10;
int pinF=6;
int pinG=7;
int pinDP=13;
int V_D1=2;
int V_D2=0;
int V_D3=1;
int A_D1=5;
int A_D2=4;
int A_D3=3;
int W_D1=A2;
int W_D2=A3;
int W_D3=A5;
int sayi;
int birler=0;
int onlar=0;
int yuzler=0;
int bekleme=1;
int volt=0;
int amper=0;
int rakam=0;

void setup()
{
  pinMode (A1, INPUT);
  pinMode (A2, INPUT);
   pinMode (A6, INPUT);
  pinMode (pinA, OUTPUT);
  pinMode (pinB, OUTPUT);
  pinMode (pinC, OUTPUT);
  pinMode (pinD, OUTPUT);
  pinMode (pinE, OUTPUT);
  pinMode (pinF, OUTPUT);
  pinMode (pinG, OUTPUT);
  pinMode (pinDP, OUTPUT);
  pinMode (A_D1, OUTPUT);
  pinMode (A_D2, OUTPUT);
  pinMode (A_D3, OUTPUT);
  pinMode (V_D1, OUTPUT);
  pinMode (V_D2, OUTPUT);
  pinMode (V_D3, OUTPUT);
  pinMode (W_D1, OUTPUT);
  pinMode (W_D2, OUTPUT);
  pinMode (W_D3, OUTPUT);
  pinMode (pinA, OUTPUT);
  digitalWrite(A_D1,LOW);
  digitalWrite(A_D2,LOW);
  digitalWrite(A_D3,LOW);
  digitalWrite(V_D1,LOW);
  digitalWrite(V_D2,LOW);
  digitalWrite(V_D3,LOW);
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  digitalWrite(pinDP,LOW);
  
}

void loop()
{
   
 for(int Sayi=0; Sayi<2; Sayi++)
 {
 //volt=map(analogRead(A0),0,1024,0,500); 
 volt=000;  
birler=volt%10;
onlar=((volt-(volt%10))%100)/10;
yuzler=((volt-(volt%100)%1000)/100);
digitalWrite(pinDP,LOW);
digitalWrite(V_D3,HIGH);
rakam(birler);
delay(bekleme);
digitalWrite(V_D3,LOW);

if (volt<99)
{
  digitalWrite(pinDP,HIGH);
}
else {
digitalWrite(pinDP,LOW);

}
digitalWrite(V_D2,HIGH);
rakam(onlar);
delay(bekleme);
digitalWrite(V_D2,LOW);

if (volt>99)
{
  digitalWrite(pinDP,HIGH);
}
else {
digitalWrite(pinDP,LOW);

}

digitalWrite(V_D1,HIGH);
rakam(yuzler);
delay(bekleme);
digitalWrite(V_D1,LOW);
 }

           for(int Sayi=0; Sayi<2; Sayi++)
          {
          //volt=map(analogRead(A1),0,1024,0,500);   
          volt=356;
          birler=volt%10;
          onlar=((volt-(volt%10))%100)/10;
          yuzler=((volt-(volt%100)%1000)/100);

          digitalWrite(A_D3,HIGH);
          rakam(birler);
          delay(bekleme);
          digitalWrite(A_D3,LOW);

           digitalWrite(A_D2,HIGH);
           rakam(onlar);
           delay(bekleme);
           digitalWrite(A_D2,LOW);

          digitalWrite(segment1k,HIGH);
          rakam(yuzler);
          delay(bekleme);
          digitalWrite(segment1k,LOW);
          }
// WATT DISPLAY ___________________________________________________
    for(int Sayi=0; Sayi<2; Sayi++)
          {
          //volt=map(analogRead(A1),0,1024,0,500);   
          volt=975;
          birler=volt%10;
          onlar=((volt-(volt%10))%100)/10;
          yuzler=((volt-(volt%100)%1000)/100);

          digitalWrite(W_D3,HIGH);
          rakam(birler);
          delay(bekleme);
          digitalWrite(W_D3,LOW);

           digitalWrite(W_D2,HIGH);
           rakam(onlar);
           delay(bekleme);
           digitalWrite(W_D2,LOW);

          digitalWrite(W_D1,HIGH);
          rakam(yuzler);
          delay(bekleme);
          digitalWrite(W_D1,LOW);
        }

void rakam(int x)
{
switch(x){
case 1: bir(); break;
case 2: iki(); break;
case 3: uc(); break;
case 4: dort(); break;
case 5: bes(); break;
case 6: alti(); break;
case 7: yedi(); break;
case 8: sekiz(); break;
case 9: dokuz(); break;
default: sifir(); break;
}
}

void bir()
{
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
 // digitalWrite(pinDP,LOW);
  
}
void iki()
{
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
//  digitalWrite(pinDP,LOW);
  
}
void uc()
{
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
 // digitalWrite(pinDP,LOW);
  
}
void dort()
{
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
//  digitalWrite(pinDP,LOW);
  
}
void bes()
{
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
//  digitalWrite(pinDP,LOW);
  
}
void alti()
{
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
 // digitalWrite(pinDP,LOW);
  
}
void yedi()
{
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
//  digitalWrite(pinDP,LOW);
  
}
void sekiz()
{
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
//  digitalWrite(pinDP,LOW);
  
}
void dokuz()
{
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
//  digitalWrite(pinDP,LOW);
  
}
void sifir()
{
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,LOW);
//  digitalWrite(pinDP,LOW);
  
}
}
