#include <AT89s52.h>
#define SEV_SEG P0
void wait(int n);
int arr[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main()
{
/*
  SEV_SEG=0xFF;
  while(1)
  {
  SEV_SEG=(0xC0);
  wait(5);
  SEV_SEG=(0xF9);
  wait(5);
  SEV_SEG=(0xA4);
  wait(5);
  SEV_SEG=(0xB0);
  wait(5);
  SEV_SEG=(0x99);
  wait(5);
  SEV_SEG=(0x92);
  wait(5);
  SEV_SEG=(0x82);
  wait(5);
  SEV_SEG=(0xF8);
  wait(5);
  SEV_SEG=(0x80);
  wait(5);
  SEV_SEG=(0x90);
  wait(5);
  }
  */
  SEV_SEG=0xFF;
  
  while(1)
  {
  int i;
    for(i=0;i<10;i++){
      SEV_SEG=arr[i];
      wait(2);
  }
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