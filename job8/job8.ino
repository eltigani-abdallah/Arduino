// C++ code
//
void setup()
{

  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  int lightLevel=0;
  
  while (lightLevel<=255){
    analogWrite(3, lightLevel);
    delay(10); // Wait for 500 millisecond(s)
    lightLevel++;
  }
  lightLevel=0;
  while (lightLevel<=255){
    analogWrite(5, lightLevel);
    delay(10); // Wait for 500 millisecond(s)
    lightLevel++;
  }

  lightLevel=0;
  while (lightLevel<=255){
    analogWrite(6, lightLevel);
    delay(10); // Wait for 500 millisecond(s)
    lightLevel++;
  }

  lightLevel=255;




  while (lightLevel>0){
  analogWrite(3, lightLevel);
  delay(10); // Wait for 500 millisecond(s)
  lightLevel--;
  }


  lightLevel=255;
  while (lightLevel>0){
  analogWrite(5, lightLevel);
  delay(10); // Wait for 500 millisecond(s)
  lightLevel--;
  }


 lightLevel=255;
  while (lightLevel>0){
  analogWrite(6, lightLevel);
  delay(10); // Wait for 500 millisecond(s)
  lightLevel--;
  }

  
}