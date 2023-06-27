#include <AT89s52.h>
#define LED1 P1_1
#define LED2 P2_1
#define ON 0
#define OFF 1
void wait(int);
void main()
{
	LED1=OFF;
	LED2=OFF;
	while(1)
	{
	    LED1=ON;
	    LED2=OFF;
	    wait(2);
	    LED1=OFF;
	    LED2=ON;
	    wait(2);
	}
	
}

void wait(int del)  /* this program generate delay in multiples of 100us */
{
 int c1,c2;  /* Inner and outer loop Count vaf  riables */
 for(c1=0; c1<del; c1++)	/* Outer loop runs for "del" times */
 {
  for(c2=0; c2<15; c2++)  /* Inner loop runs for 15 times */
  {
  }
 }
}