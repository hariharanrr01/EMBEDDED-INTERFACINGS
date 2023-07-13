#include <AT89S52.h>  /* Header File */
#include <I2C.h>
void main()
{
  i2c_init();
  i2c_start();
  i2c_write(0xD0);
  i2c_write(0x00);
  i2c_write(0x00);
  i2c_stop();
  while(1)
  {
    i2c_start();
    i2c_write(0xD0);
    i2c_write(0x00);
    i2c_start();
    i2c_write(0xD1);
    P2=~(i2c_read());
    i2c_ack();
    i2c_stop();
  }
}



