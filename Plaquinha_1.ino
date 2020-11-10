const int dirPinX = 8;
const int stepPinX = 9;
const int dirPinY = 10;
const int stepPinY = 11;

void setup() {

  pinMode(stepPinY,OUTPUT);
  pinMode(dirPinY,OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {

 digitalWrite(12, HIGH);  
  delay(1000);                       
digitalWrite(12, LOW);    
  delay(5000);  
  
digitalWrite(dirPinY,HIGH); //Descer Y
{
int y;
  
for (y = 0; y<=2000; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}


digitalWrite(dirPinY,LOW); //Subir Y
{
int y;
  
for (y = 0; y<=1000; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinX,LOW); // Esquerda
{
int x;
  
for (x = 0; x<=3600; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinY,LOW); //Descer Y
{
int y;
  
for (y = 0; y<=6400; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinX,HIGH); // Direita
{
int x;
  
for (x = 0; x<=1600; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(13, HIGH);  // sobe caneta
  delay(1000);                       
digitalWrite(13, LOW);    
  delay(1000);

  digitalWrite(dirPinY,LOW); //Subir Y
{
int y;
  
for (y = 0; y<=1000; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(12, HIGH);  // desce caneta
  delay(1000);                       
digitalWrite(12, LOW);    
  delay(5000);  

  digitalWrite(dirPinX,HIGH); // Direita
{
int x;
  
for (x = 0; x<=600; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

 digitalWrite(dirPinX,LOW); // Esquerda
{
int x;
  
for (x = 0; x<=600; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinY,LOW); //Subir Y
{
int y;
  
for (y = 0; y<=1600; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

 digitalWrite(dirPinX,LOW); // Esquerda
{
int x;
  
for (x = 0; x<=600; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinY,LOW); //Subir Y
{
int y;
  
for (y = 0; y<=3000; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(13, HIGH);  // sobe caneta
  delay(1000);                       
digitalWrite(13, LOW);    
  delay(1000);

  digitalWrite(dirPinX,HIGH); // Direita
{
int x;
  
for (x = 0; x<=1600; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(12, HIGH);  // desce caneta
  delay(1000);                       
digitalWrite(12, LOW);    
  delay(5000);

  digitalWrite(dirPinY,LOW); //Subir Y
{
int y;
  
for (y = 0; y<=1600; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

  digitalWrite(dirPinY,HIGH); //Descer
{
int y;
  
for (y = 0; y<=2000; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinX,LOW); // Esquerda
{
int x;
  
for (x = 0; x<=800; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinY,HIGH); //Descer
{
int y;
  
for (y = 0; y<=1400; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinX,HIGH); // Direita
{
int x;
  
for (x = 0; x<=2000; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinY,HIGH); //Descer
{
int y;
  
for (y = 0; y<=3000; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinX,HIGH); // Direita
{
int x;
  
for (x = 0; x<=1500; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(13, HIGH);  // sobe caneta
  delay(1000);                       
digitalWrite(13, LOW);    
  delay(1000);

digitalWrite(dirPinX,HIGH); // Direita
{
int x;
  
for (x = 0; x<=2000; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinY,LOW); //Subir Y
{
int y;
  
for (y = 0; y<=1000; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

 digitalWrite(12, HIGH);  // desce caneta
  delay(1000);                       
digitalWrite(12, LOW);    
  delay(5000);  

  digitalWrite(dirPinY,LOW); //Subir Y
{
int y;
  
for (y = 0; y<=3000; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinX,LOW); // Esquerda
{
int x;
  
for (x = 0; x<=4000; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinX,HIGH); // Direita
{
int x;
  
for (x = 0; x<=1000; x++)
{
  digitalWrite(stepPinX,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinX,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(dirPinY,LOW); //Subir Y
{
int y;
  
for (y = 0; y<=3000; y++)
{
  digitalWrite(stepPinY,HIGH);
  delayMicroseconds(1000);
  digitalWrite(stepPinY,LOW);
  delayMicroseconds(1000);
}
}

digitalWrite(13, HIGH);  // sobe caneta
  delay(1000);                       
digitalWrite(13, LOW);    
  delay(1000);
}
  
