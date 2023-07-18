#include <AT89s52.h>
#define LED P0_0
void main()
{
  TR0=0;
  TMOD=((TMOD&0xF0)|0x01);
  while(1)
  {
    TH0=0xFF;
    TL0=0xF6;
    TR0=1;
  while(TF0==0)
  {
  }
  TF0=0;
  LED=!LED;
  TR0=0;
  }
}

 