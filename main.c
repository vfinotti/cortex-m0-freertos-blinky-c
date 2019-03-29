/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#define LedToggle 0xf0f0f0f0

int a;
int b = 0;

int main(void)
{
  unsigned int counter; // dummy
  unsigned int ii;      // loop iterator
  unsigned int trap;    // memory access pattern receiver
  unsigned int period;  // time interval for memory access
  period=1000000;      // period for FPGA implementation; roughly 3 seconds for a 10MHz osc in CM0_DS
  /* period=200;           // period for simulations in ARM/Keil MDK and Xilinx ISIM tool */

  while(1)
    {
      counter=0;
      for(ii=0; ii<period; ii++)
        {
          counter++;
        }
      trap=LedToggle; // memory access pattern (toggle LED)
      trap++; // force toggle value to change value

      /* for(ii=0; ii<period; ii++) */
      /*   { */
      /*     counter++; */
      /*   } */
      /* trap=LedOff;   // memory access pattern (turn off) */
      /* /\* trap=4042322160;   // memory access pattern (turn off) *\/ */
      /* /\* trap=0x24;   // memory access pattern (turn off) *\/ */
      /* trap++; */
      // dummy
    }
}
