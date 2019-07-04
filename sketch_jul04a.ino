  //front  back left right stop
void setup()
{
  pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

int income=0;
void loop()
{
  if(Serial.available()>0)
    {
      income=Serial.read();
    }
  switch(income)
  {
    case'f':
    forward();
        case'b':
    backward();
        case's':
    stop();
        case'l':
    left();
        case'r':
    right();
    defaut:
    break;
  }
}


void forward()
{
  digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
}

void backward()
{
  digitalWrite(6,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(9,LOW);
}
void left()
{
  digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(9,LOW);
}

void right()
{
  digitalWrite(6,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
}

void stop()
{
  digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
}
