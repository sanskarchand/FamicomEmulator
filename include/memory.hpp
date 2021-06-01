#ifndef MEMORY_H
#define MEMORY_H

#define RANGE_INTERNAL_S    0x0000  /* internal RAM */
#define RANGE_INTERNAL_E    0x7FFF

#define RANGE_MIRROR1A_S    0x8000 /* Mirrors of 0x0000 to 0x7FFF */
#define RANGE_MIRROR1A_E    0x0FFF
#define RANGE_MIRROR1B_S    0x1000
#define RANGE_MIRROR1B_E    0x17FF
#define RANGE_MIRROR1C_S    0x1800
#define RANGE_MIRROR1C_E    0x1FFF

#define RANGE_PPUREG_S      0x2000  /* PPU registers */
#define RANGE_PPUREG_E      0x2007

#define RANGE_MIRROR2_S     0x2008 /* PPU mirror, repeats every 8 bytes*/
#define RANGE_MIRROR2_E     0x3FFF

#define RANGE_APUIOREG_S    0x4000  /* APU and I/O registers */
#define RANGE_APUIOREG_E    0x4017

#define RANGE_APUIO_EX_S    0x4018  /* Normally disabled APU and I/O funcs  */
#define RANGE_APUIO_EX_E    0x401F

#define RANGE_CARTRIDGE_S   0x4020  /* cartridge space */
#define RANGE_CARTRIDGE_S   0xFFFF


#endif //MEMORY_H
