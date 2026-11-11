int G_pins[] = {3,4,5,6};
int B_pins[] = {8,9,10,11};
int binToGray(int cnt)
{
	return cnt^(cnt>>1);
}

void setup()
{
	for(int i = 0 ; i < 4 ; i++)
    {
    	pinMode(G_pins[i] , OUTPUT);
      	pinMode(B_pins[i] , OUTPUT);
    }
}

void loop()
{
	for(int cnt = 0; cnt < 16; cnt++)
    {
      	int gray = binToGray(cnt);
    	for(int bit = 0; bit < 4; bit++)
        {
        	int value = (gray >> bit) & 1;
          	digitalWrite(G_pins[bit],value);
          	value = (cnt >> bit) & 1;
          	digitalWrite(B_pins[bit],value);
        }
      delay(1000);
    }
  	
}