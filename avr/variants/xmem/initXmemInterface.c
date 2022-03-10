#include <Arduino.h>
//#include <avr/iomxx0_1.h>
void enableExternalMemory() __attribute__((naked,used)) __attribute__((section (".init3")));
void enableExternalMemory()
{
  XMCRA = (1<<SRE);
}
