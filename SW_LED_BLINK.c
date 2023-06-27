#include <AT89s52.h>
#define SW P0
#define LED P1
void wait(int n);
void main()
{
  char s;
  SW=0xFF;
  while(1)
  {
    LED=SW;
    wait(1);
    LED=0xFF;
    wait(1);
  }
} 

void wait(int del)
{
int i,j; 
for(i=0;i<del;i++)
{
for(j=0;j<15;j++);
}
}