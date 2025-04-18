void setup() 
{
 
int i;
for(i=1;i<=7;i++)
{
  pinMode(i,OUTPUT);
}

}

void loop() {
  zero();
  one();

}

void zero()
{
  int i;
  for(i=1;i<=7;i++)
  {
     if(i==7)
  {
    digitalWrite(i,LOW);
  }
  else
  {
    digitalWrite(i,HIGH);
  }
  }
  delay(1000);
}



void one()
{
  int i;
  for(i=1;i<=7;i++)
  {
     if(i==2||i==3)
  {
    digitalWrite(i,HIGH);
  }
  else
  {
    digitalWrite(i,LOW);
  }
  }
  delay(1000);
}
