int x;
int y;
int z;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT); 
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
}


void zero(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
 
}


void three(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
 
}


void dash(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
}


void two(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW );
}
void six(){
 digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);  
}

void seven(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}


void loop() {
  x=digitalRead(11);
  y=digitalRead(10);
  z=digitalRead(9);
  if(x==LOW && y==LOW && z==LOW){
  zero();}
  if(x==LOW && y==LOW && z==HIGH){
  three();}
  if(x==LOW && y==HIGH && z==LOW){
  dash();}
  if(x==LOW && y==HIGH && z==HIGH){
  two();}
  if(x==HIGH && y==LOW && z==LOW){
  six();}
  if(x==HIGH && y==LOW && z==HIGH){
  dash();}
  if(x==HIGH && y==HIGH && z==LOW){
  zero();}
  if(x==HIGH && y==HIGH && z==HIGH){
  seven();}
}
