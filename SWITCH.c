#include <AT89s52.h>
#define LED P2_0
#define ON 0
#define OFF 1
#define SW P3_0
#define INPUT 1
void wait(int);
void main()
{
__bit status;
LED=OFF;
SW=INPUT;
while(1)
{
status=SW;
if(LED!=status)
{
LED=ON;
wait(1);
LED=OFF;
wait(2);
}
}
}

void wait(int del) 
{
 int c1,c2;  
 for(c1=0; c1<del; c1++)	
 {
  for(c2=0; c2<15; c2++)  
  {
  }
 }
}