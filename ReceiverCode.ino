int ldrPin=A0;
int ledPin=11;
int noise=0;
char text=NULL;
char ascii_values[62]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};
int check(int bin[8])
{
  int ascii=0;
  for(int i=0;i<8;i++)
  {
    ascii=ascii+bin[i]*pow(bin[i],(7-i));
  }
  return ascii;
}

void setup()
{
  Serial.begin(9600);
  pinMode(ldrPin,INPUT);
  noise=analogRead(ldrPin);
  //Serial.println(noise);
}
void loop()
{
  int rec=analogRead(ldrPin);
  rec=rec-(noise-10);
  //Serial.println(rec);
  if(rec>400)
  delay(50);
  
  int binData[8]={0,0,0,0,0,0,0,0};
   
  if(rec>400)
  {
    for(int i=0; i<8; i++)
    {
      int data=analogRead(ldrPin);
      //Serial.println(data);
      data=data-(noise-10);
      //Serial.println(data);
      if(data>100 && data<400)
      {
        analogWrite(ledPin, 0);
        binData[i]=0;
        //Serial.println("0");
      }
      if(data>400)
      {
        binData[i]=1;
        analogWrite(ledPin, 255);
        //Serial.println("1");
      }
      delay(60);
    }
  }
  int ascii_value=binData[0]*128+binData[1]*64+binData[2]*32+binData[3]*16+binData[4]*8+binData[5]*4+binData[6]*2+binData[7]*1;
  /*for(int i=0;i<8;i++)
  {
    ascii_value=ascii_value+binData[i]*pow(2,(7-i));
  }*/
  
  //int ascii_value=check(binData);
  /*if(ascii_value>0)
    Serial.println(ascii_value);
  */
  if(ascii_value==32)
  {
    Serial.print(" ");
  }
  else
  {
    if(ascii_value>=65 && ascii_value<=90)
    {
      int x=ascii_value-65;
      Serial.print(ascii_values[x]);
    }
    else if(ascii_value>=97 && ascii_value<=122)
    {
      int x=ascii_value-97;
      Serial.print(ascii_values[26+x]);
    }
    else if(ascii_value>=48 && ascii_value<=57)
    {
      int x=ascii_value-48;
      Serial.print(ascii_values[52+x]);
    }
  }
}
