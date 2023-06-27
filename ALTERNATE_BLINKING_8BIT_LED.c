#include <AT89s52.h>
void wait(int n);
void main(){
  
  while(1)
  {
  P0=0xAA;
  wait(2);
  P0=0x55;
  wait(2);
 v  }
}

void wait(int del)
{
int i,j; 
for(i=0;i<del;i++)
{
for(j=0;j<15;j++);
}
}