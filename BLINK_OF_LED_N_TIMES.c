#include <AT89s52.h>	/* include header for AT89S52 */ 
#define LED P1_7
#define OFF 1
#define ON 0
void wait(int);		/* declare delay function */
void main()
{
int n=6;
int i=0;
 P2_0=OFF;	/*Initially turn OFF the LED */
 for(i=0;i<n;i++)	/* Execute below lines in Super loop (Infinite loop) */
 {
  LED=ON;	/* Turn On the LED */
  wait(1);	/* Wait for sometime 100us */
  LED=OFF;	/* Turn OFF the LED */
  wait(1);	/* Wait for sometime 100us */
 }
 while(1)
 {
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
