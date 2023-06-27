#include <AT89s52.h>
void wait(int n);
void main(){
while(1){
/*
  P0=~0x01;
  wait(1);
  P0=~0x02;
  wait(1);
  P0=~0x04;
  wait(1);
  P0=~0x08;
  wait(1);
  P0=~0x10;
  wait(1);
  P0=~0x20;
  wait(1);
  P0=~0x40;
  wait(1);
  P0=~0x80;
  wait(1);*/
  char data=0x01;
  char i;
  for(i=0;i<8;i++){
	P0=~(data<<i);
	wait(1);
  }
  }
while(1){
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