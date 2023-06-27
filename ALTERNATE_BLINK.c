#include <AT89s52.h>
void wait(int n);
void main(){
  
  while(1)
  {
  char data=0xAA;
  P0=data;
  wait(2);
  P0=(data<<1) | (data>>7);
  wait(2);
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
