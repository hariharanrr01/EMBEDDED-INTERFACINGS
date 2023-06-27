#include <AT89s52.h>
#define SW P0
#define LED P1_5
#define ON 0
#define OFF 1
void wait(int n);
void main()
{
  char s;
  
  SW=0xFF;
  while(1)
  {
    s=SW;
    if(s==0xAA)
    {
      LED=ON;
    }
    else{
	LED=OFF;
    }
  }
}