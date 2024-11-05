int pin = A2;
int val;
float V;
int G =9;
int R=8;
int B=10;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pin,INPUT);
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(B,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

val=analogRead(pin);
V=(5./1023.)*val;
Serial.println(V);
 if(V<2.){
digitalWrite(B,HIGH);
 }
 if(V>2.){
    digitalWrite(B,LOW);
 }


  if(V>2. || V<4){
digitalWrite(G,HIGH);
 }
 if(V<2. || V>4){
    digitalWrite(G,LOW);
 }



  if(V>4){
digitalWrite(R,HIGH);
 }
 if(V<4){
    digitalWrite(R,LOW);
 }


delay(250);
}
