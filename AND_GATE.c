#include <AT89s52.h>
#define ON 0
#define OFF 1
#define LED1 P2_0
#define SW1 P2_1
#define SW2 P3_0
#define INPUT 1
void wait(int n);
void main()
{
   LED1=OFF;
   SW1=INPUT;
   SW2=INPUT;
   while(1)
   {
	__bit a,b;
	a=SW1;
	b=SW2;
	if(a==ON &&b==ON)
	{
	   LED1=ON;
	}
	else{
           LED1=OFF;
	}
   }
}