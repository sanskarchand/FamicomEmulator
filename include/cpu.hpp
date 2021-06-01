#ifndef CPU_H
#define CPU_H

#include "types.hpp"


extern char gMemory[0xFFFF];

namespace Fam 
{

//the RP2A03 contains this CPU and the APU in the real H/W
class CPU 
{
public:
    CPU();
    ~CPU();

public:
    /* registers */
    Byte regA;
    Byte regX, regY;
    DByte regPC;
    Byte regP;  /* only 6 bits used */

};


}

#endif //CPU_H
