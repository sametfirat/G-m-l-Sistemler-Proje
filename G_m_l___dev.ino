
  int kolonlar[16]={13,12,11,10,9,8,7,6,5,4,3,2,1,0,A5,A4};

  int sutunlar[4]={A3,A2,A1,A0};

  int zaman = 218;
 
void setup()
{
  
  for(int i = 0; i<16; i++)
  {
    pinMode(kolonlar[i], OUTPUT);
  }
  
  for(int i = 0; i<4; i++)
  {
    pinMode(sutunlar[i], OUTPUT);
  }
 
  randomSeed(analogRead(10));
}


void loop()
{
  hepsinikpat();
    titretac();
  hepsiniac();
    delay(zaman);
  zamanagoreincik();
    incik();5
   yanlardanbasla();
  delay(zaman);
  
 donudd();
  hepsinikpat();
 otomatik();
  yagmur();
 hareketlidiktorken();
  teksira();
  helikopter();
  ictendisadon();
  titretkapat();
  hepsinikpat();
  delay(3000);
}



void hepsinikpat()
 {
   for(int i = 0; i<16; i++)
   {
     digitalWrite(kolonlar[i], 1);
   }
   for(int i = 0; i<4; i++)
   {
     digitalWrite(sutunlar[i], 0);
   }
 }
 

void hepsiniac()
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(kolonlar[i], 0);
  }
  
  for(int i = 0; i<4; i++)
  {
    digitalWrite(sutunlar[i], 1);
  }
}

void turnColumnsOff()
{
  for(int i = 0; i<16; i++)
  {
    digitalWrite(kolonlar[i], 1);
  }
}

void titretac()
{
  int i = 100;
  while(i != 0)
  {
    hepsiniac();
    delay(i);
    hepsinikpat();
    delay(i);
    i-= 4;
  }
}

void zamanagoreincik()
{
  int x = 25;
  for(int i = 5; i != 0; i--)
  {
    hepsiniac();
    for(int i = 4; i!=0; i--)
    {
      digitalWrite(sutunlar[i-1], 0);
      delay(x);
    }
    for(int i = 0; i<4; i++)
    {
      digitalWrite(sutunlar[i], 1);
      delay(x);
    }
      for(int i = 0; i<4; i++)
    {
      digitalWrite(sutunlar[i], 0);
      delay(x);
    }
    for(int i = 4; i!=0; i--)
    {
      digitalWrite(sutunlar[i-1], 1);
      delay(x);
    }
  }
}

void yanlardanbasla()
{
  int x = 25;
  hepsinikpat();
  
  for(int i = 0; i<4; i++)
  {
    digitalWrite(sutunlar[i], 1);
  }
  for(int y = 0; y<3; y++)
  {
    
    for(int i = 0; i<4; i++)
    {
      digitalWrite(kolonlar[i], 0);
      delay(x);
    }
    
    for(int i = 4; i<8; i++)
    {
      digitalWrite(kolonlar[i], 0);
      delay(x);
    }
    
    for(int i = 8; i<12; i++)
    {
      digitalWrite(kolonlar[i], 0);
      delay(x);
    }
    
    for(int i = 12; i<16; i++)
    {
      digitalWrite(kolonlar[i], 0);
      delay(x);
    }
    
    for(int i = 0; i<4; i++)
    {
      digitalWrite(kolonlar[i], 1);
      delay(x);
    }
    
    for(int i = 4; i<8; i++)
    {
      digitalWrite(kolonlar[i], 1);
      delay(x);
    }
    
    for(int i = 8; i<12; i++)
    {
      digitalWrite(kolonlar[i], 1);
      delay(x);
    }
    
    for(int i = 12; i<16; i++)
    {
      digitalWrite(kolonlar[i], 1);
      delay(x);
    }
    
    for(int i = 12; i<16; i++)
    {
      digitalWrite(kolonlar[i], 0);
      delay(x);
    }
    
    for(int i = 8; i<12; i++)
    {
      digitalWrite(kolonlar[i], 0);
      delay(x);
    }
    
    for(int i = 4; i<8; i++)
    {
      digitalWrite(kolonlar[i], 0);
      delay(x);
    }
    
    for(int i = 0; i<4; i++)
    {
      digitalWrite(kolonlar[i], 0);
      delay(x);
    }
    
    for(int i = 12; i<16; i++)
    {
      digitalWrite(kolonlar[i], 1);
      delay(x);
    }
    
    for(int i = 8; i<12; i++)
    {
      digitalWrite(kolonlar[i], 1);
      delay(x);
    }
    
    for(int i = 4; i<8; i++)
    {
      digitalWrite(kolonlar[i], 1);
      delay(x);
    }
    
    for(int i = 0; i<4; i++)
    {
      digitalWrite(kolonlar[i], 1);
      delay(x);
    }
  }
}

void incik()
{
  int x = 50;
  for(int i = 0; i<4; i++)
  {
    digitalWrite(sutunlar[i], 0);
  }
  for(int y = 0; y<5; y++)
  {
    for(int count = 0; count<1; count++)
    { 
      for(int i = 0; i<4; i++)
      {
        digitalWrite(sutunlar[i], 1);
        delay(x);
        digitalWrite(sutunlar[i], 0);
      }
      for(int i = 4; i !=0; i--)
      {
        digitalWrite(sutunlar[i-1], 1);
        delay(x);
        digitalWrite(sutunlar[i-1], 0);
      }
    }
    for(int i = 0; i<4; i++)
    {
      digitalWrite(sutunlar[i], 1);
      delay(x);
    }
    for(int i = 4; i!=0; i--)
    {
      digitalWrite(sutunlar[i-1], 0);
      delay(x);
    }
  }
}

void titretkapat()
{
  hepsiniac();
  for(int i = 0; i!= 150; i+=5)
  {
    hepsinikpat();
    delay(i+50);
    hepsiniac();
    delay(i);
  }
}

void donudd()
{
  for(int x = 75; x != 0; x -=15)
  {
    hepsinikpat();
    for(int i = 4; i != 0; i--)
    {
      digitalWrite(sutunlar[i-1], 1);
      digitalWrite(kolonlar[5], 0);
      digitalWrite(kolonlar[6], 0);
      digitalWrite(kolonlar[9], 0);
      digitalWrite(kolonlar[10], 0);
      
      digitalWrite(kolonlar[0], 0);
      delay(x);
      digitalWrite(kolonlar[0], 1);
      digitalWrite(kolonlar[4], 0);
      delay(x);
      digitalWrite(kolonlar[4], 1);
      digitalWrite(kolonlar[8], 0);
      delay(x);
      digitalWrite(kolonlar[8], 1);
      digitalWrite(kolonlar[12], 0);
      delay(x);
      digitalWrite(kolonlar[12], 1);
      digitalWrite(kolonlar[13], 0);
      delay(x);
      digitalWrite(kolonlar[13], 1);
      digitalWrite(kolonlar[15], 0);
      delay(x);
      digitalWrite(kolonlar[15], 1);
      digitalWrite(kolonlar[14], 0);
      delay(x);
      digitalWrite(kolonlar[14], 1);
      digitalWrite(kolonlar[11], 0);
      delay(x);
      digitalWrite(kolonlar[11], 1);
      digitalWrite(kolonlar[7], 0);
      delay(x);
      digitalWrite(kolonlar[7], 1);
      digitalWrite(kolonlar[3], 0);
      delay(x);
      digitalWrite(kolonlar[3], 1);
      digitalWrite(kolonlar[2], 0);
      delay(x);
      digitalWrite(kolonlar[2], 1);
      digitalWrite(kolonlar[1], 0);
      delay(x);
      digitalWrite(kolonlar[1], 1);
    }
  }
}

void otomatik()
{
  hepsinikpat();
  int x = 10;
  for(int i = 0; i !=750; i+=2)
  {
  int randomLayer = random(0,4);
  int randomColumn = random(0,16);
  
  digitalWrite(sutunlar[randomLayer], 1);
  digitalWrite(kolonlar[randomColumn], 0);
  delay(x);
  digitalWrite(sutunlar[randomLayer], 0);
  digitalWrite(kolonlar[randomColumn], 1);
  delay(x); 
  }
}

void yagmur()
{
  hepsinikpat();
  int x = 50;
  for(int i = 0; i!=60; i+=2)
  {
    int randomColumn = random(0,16);
    digitalWrite(kolonlar[randomColumn], 0);
    digitalWrite(sutunlar[0], 1);
    delay(x+50);
    digitalWrite(sutunlar[0], 0);
    digitalWrite(sutunlar[1], 1);
    delay(x);
    digitalWrite(sutunlar[1], 0);
    digitalWrite(sutunlar[2], 1);
    delay(x);
    digitalWrite(sutunlar[2], 0);
    digitalWrite(sutunlar[3], 1);
    delay(x+50);
    digitalWrite(sutunlar[3], 0);
    digitalWrite(kolonlar[randomColumn], 1);
  }
}

void hareketlidiktorken()
{
  int x = 350;
  hepsinikpat();
  for(int count = 0; count<5; count++)
  {
    
    for(int i = 0; i<8; i++)
    {
      digitalWrite(kolonlar[i], 0);
    }
    digitalWrite(sutunlar[3], 1);
    digitalWrite(sutunlar[2], 1);
    delay(x);
    hepsinikpat();
    
    for(int i = 4; i<12; i++)
    {
      digitalWrite(kolonlar[i], 0);
    }
    digitalWrite(sutunlar[1], 1);
    digitalWrite(sutunlar[2], 1);
    delay(x);
    hepsinikpat();
    
    for(int i = 8; i<16; i++)
    {
      digitalWrite(kolonlar[i], 0);
    }
    digitalWrite(sutunlar[0], 1);
    digitalWrite(sutunlar[1], 1);
    delay(x);
    hepsinikpat();
    
    for(int i = 4; i<12; i++)
    {
      digitalWrite(kolonlar[i], 0);
    }
    digitalWrite(sutunlar[0], 1);
    digitalWrite(sutunlar[1], 1);
    delay(x);
    hepsinikpat();
    
    for(int i = 0; i<8; i++)
    {
      digitalWrite(kolonlar[i], 0);
    }
    digitalWrite(sutunlar[0], 1);
    digitalWrite(sutunlar[1], 1);
    delay(x);
    hepsinikpat();
    
    for(int i = 4; i<12; i++)
    {
      digitalWrite(kolonlar[i], 0);
    }
    digitalWrite(sutunlar[1], 1);
    digitalWrite(sutunlar[2], 1);
    delay(x);
    hepsinikpat();
    
    for(int i = 8; i<16; i++)
    {
      digitalWrite(kolonlar[i], 0);
    }
    digitalWrite(sutunlar[2], 1);
    digitalWrite(sutunlar[3], 1);
    delay(x);
    hepsinikpat();
    
    for(int i = 4; i<12; i++)
    {
      digitalWrite(kolonlar[i], 0);
    }
    digitalWrite(sutunlar[2], 1);
    digitalWrite(sutunlar[3], 1);
    delay(x);
    hepsinikpat();
  }
  
  for(int i = 0; i<8; i++)
  {
    digitalWrite(kolonlar[i], 0);
  }
  digitalWrite(sutunlar[3], 1);
  digitalWrite(sutunlar[2], 1);
  delay(x);
  hepsinikpat();
}

void helikopter()
{
  hepsinikpat();
  int x = 80;
  for(int y = 4; y>0; y--)
  {
    for(int i = 0; i<6; i++)
    {
      
      digitalWrite(sutunlar[y-1], 1);
      
      turnColumnsOff();
      digitalWrite(kolonlar[0], 0);
      digitalWrite(kolonlar[5], 0);
      digitalWrite(kolonlar[10], 0);
      digitalWrite(kolonlar[15], 0);
      delay(x);
      
      turnColumnsOff();
      digitalWrite(kolonlar[4], 0);
      digitalWrite(kolonlar[5], 0);
      digitalWrite(kolonlar[10], 0);
      digitalWrite(kolonlar[11], 0);
      delay(x);
      
      turnColumnsOff();
      digitalWrite(kolonlar[6], 0);
      digitalWrite(kolonlar[7], 0);
      digitalWrite(kolonlar[8], 0);
      digitalWrite(kolonlar[9], 0);
      delay(x);
      
      turnColumnsOff();
      digitalWrite(kolonlar[3], 0);
      digitalWrite(kolonlar[6], 0);
      digitalWrite(kolonlar[9], 0);
      digitalWrite(kolonlar[12], 0);
      delay(x);
      
      turnColumnsOff();
      digitalWrite(kolonlar[2], 0);
      digitalWrite(kolonlar[6], 0);
      digitalWrite(kolonlar[9], 0);
      digitalWrite(kolonlar[13], 0);
      delay(x);
      
      turnColumnsOff();
      digitalWrite(kolonlar[1], 0);
      digitalWrite(kolonlar[5], 0);
      digitalWrite(kolonlar[10], 0);
      digitalWrite(kolonlar[14], 0);
      delay(x);
    }
  }
  
  turnColumnsOff();
  digitalWrite(kolonlar[0], 0);
  digitalWrite(kolonlar[5], 0);
  digitalWrite(kolonlar[10], 0);
  digitalWrite(kolonlar[15], 0);
  delay(x);
}

void ictendisadon()
{
  hepsiniac();
  int x = 60;
  for(int i = 0; i<6; i++)
  {
    
    digitalWrite(kolonlar[0], 1);
    delay(x);
    digitalWrite(kolonlar[1], 1);
    delay(x);
    digitalWrite(kolonlar[2], 1);
    delay(x);
    digitalWrite(kolonlar[3], 1);
    delay(x);
    digitalWrite(kolonlar[7], 1);
    delay(x);
    digitalWrite(kolonlar[11], 1);
    delay(x);
    digitalWrite(kolonlar[15], 1);
    delay(x);
    digitalWrite(kolonlar[14], 1);
    delay(x);
    digitalWrite(kolonlar[13], 1);
    delay(x);
    digitalWrite(kolonlar[12], 1);
    delay(x);
    digitalWrite(kolonlar[8], 1);
    delay(x);
    digitalWrite(kolonlar[4], 1);
    delay(x);
    digitalWrite(kolonlar[5], 1);
    delay(x);
    digitalWrite(kolonlar[6], 1);
    delay(x);
    digitalWrite(kolonlar[10], 1);
    delay(x);
    digitalWrite(kolonlar[9], 1);
    delay(x);
    
    digitalWrite(kolonlar[9], 0);
    delay(x);
    digitalWrite(kolonlar[10], 0);
    delay(x);
    digitalWrite(kolonlar[6], 0);
    delay(x);
    digitalWrite(kolonlar[5], 0);
    delay(x);
    digitalWrite(kolonlar[4], 0);
    delay(x);
    digitalWrite(kolonlar[8], 0);
    delay(x);
    digitalWrite(kolonlar[12], 0);
    delay(x);
    digitalWrite(kolonlar[13], 0);
    delay(x);
    digitalWrite(kolonlar[14], 0);
    delay(x);
    digitalWrite(kolonlar[15], 0);
    delay(x);
    digitalWrite(kolonlar[11], 0);
    delay(x);
    digitalWrite(kolonlar[7], 0);
    delay(x);
    digitalWrite(kolonlar[3], 0);
    delay(x);
    digitalWrite(kolonlar[2], 0);
    delay(x);
    digitalWrite(kolonlar[1], 0);
    delay(x);
    digitalWrite(kolonlar[0], 0);
    delay(x);
    
    digitalWrite(kolonlar[0], 1);
    delay(x);
    digitalWrite(kolonlar[4], 1);
    delay(x);
    digitalWrite(kolonlar[8], 1);
    delay(x);
    digitalWrite(kolonlar[12], 1);
    delay(x);
    digitalWrite(kolonlar[13], 1);
    delay(x);
    digitalWrite(kolonlar[14], 1);
    delay(x);
    digitalWrite(kolonlar[15], 1);
    delay(x);
    digitalWrite(kolonlar[11], 1);
    delay(x);
    digitalWrite(kolonlar[7], 1);
    delay(x);
    digitalWrite(kolonlar[3], 1);
    delay(x);
    digitalWrite(kolonlar[2], 1);
    delay(x);
    digitalWrite(kolonlar[1], 1);
    delay(x);
    digitalWrite(kolonlar[5], 1);
    delay(x);
    digitalWrite(kolonlar[9], 1);
    delay(x);
    digitalWrite(kolonlar[10], 1);
    delay(x);
    digitalWrite(kolonlar[6], 1);
    delay(x);
    
    digitalWrite(kolonlar[6], 0);
    delay(x);
    digitalWrite(kolonlar[10], 0);
    delay(x);
    digitalWrite(kolonlar[9], 0);
    delay(x);
    digitalWrite(kolonlar[5], 0);
    delay(x);
    digitalWrite(kolonlar[1], 0);
    delay(x);
    digitalWrite(kolonlar[2], 0);
    delay(x);
    digitalWrite(kolonlar[3], 0);
    delay(x);
    digitalWrite(kolonlar[7], 0);
    delay(x);
    digitalWrite(kolonlar[11], 0);
    delay(x);
    digitalWrite(kolonlar[15], 0);
    delay(x);
    digitalWrite(kolonlar[14], 0);
    delay(x);
    digitalWrite(kolonlar[13], 0);
    delay(x);
    digitalWrite(kolonlar[12], 0);
    delay(x);
    digitalWrite(kolonlar[8], 0);
    delay(x);
    digitalWrite(kolonlar[4], 0);
    delay(x);
    digitalWrite(kolonlar[0], 0);
    delay(x);
  }
}

void teksira()
{
  int x = 10;
  hepsinikpat();
  for(int y = 0; y<5; y++)
  {
    
    for(int count = 4; count != 0; count--)
    {
      digitalWrite(sutunlar[count-1], 1);
      for(int i = 0; i<4; i++)
      {
        digitalWrite(kolonlar[i], 0);
        delay(x);
        digitalWrite(kolonlar[i], 1);
        delay(x);
      }
    digitalWrite(sutunlar[count-1], 0);
    }
    
    for(int count = 0; count < 4; count++)
    {
      digitalWrite(sutunlar[count], 1);
      for(int i = 4; i<8; i++)
      {
        digitalWrite(kolonlar[i], 0);
        delay(x);
        digitalWrite(kolonlar[i], 1);
        delay(x);
      }
    digitalWrite(sutunlar[count], 0);
    }
    
    for(int count = 4; count != 0; count--)
    {
      digitalWrite(sutunlar[count-1], 1);
      for(int i = 8; i<12; i++)
      {
        digitalWrite(kolonlar[i], 0);
        delay(x);
        digitalWrite(kolonlar[i], 1);
        delay(x);
      }
    digitalWrite(sutunlar[count-1], 0);
    }
    
    for(int count = 0; count < 4; count++)
    {
      digitalWrite(sutunlar[count], 1);
      for(int i = 12; i<16; i++)
      {
        digitalWrite(kolonlar[i], 0);
        delay(x);
        digitalWrite(kolonlar[i], 1);
        delay(x);
      }
    digitalWrite(sutunlar[count], 0);
    }
  }
}