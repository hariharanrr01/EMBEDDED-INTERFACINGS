#include <AT89s52.h>
void wait(int n);
const char data[4]={0x81,0x42,0x24,0x18};
void main(){
char i;
while(1){
for(i=0;i<4;i++){
P0=~data[i];
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