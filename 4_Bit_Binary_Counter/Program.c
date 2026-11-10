// C++ code

int led[] = {8, 9, 10, 11};
void setup()
{
  for(int i = 0 ; i < 4 ; i++)
    pinMode(led[i], OUTPUT);
}

void loop()
{
  int cnt , i;
  for(cnt = 0 ; cnt < 16 ; cnt++)
  {
  	for(i = 0 ; i < 4 ; i++)
    {
      digitalWrite(led[i] , (cnt >> i) & 1);
    }
    delay(1000);
  }
} 