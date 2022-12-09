int RED = 12;
int YELLOW = 9;
int GREEN = 2;
int Delay_R = 500;
int Delay_Y = 200;
int Delay_G = 500;
void setup() {
pinMode(RED,OUTPUT);
pinMode(YELLOW,OUTPUT);
pinMode(GREEN,OUTPUT);
}
void loop() {
  red_light();
  delay(Delay_R);
  yellow_light();
  delay(Delay_Y);
  green_light();
  delay(Delay_G);
}
void red_light(){
  digitalWrite(RED,HIGH);
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN,LOW);
}
void yellow_light(){
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,HIGH);
  digitalWrite(GREEN,LOW);
}
void green_light(){
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN,HIGH); 
}
