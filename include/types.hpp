#ifndef TYPES_H
#define TYPES_H

#include <cstdint>

namespace Fam 
{

using Byte = std::uint8_t;
using DByte = std::uint16_t;


enum RomFileType {
    ROM_FTYPE_INES,
    ROM_FTYPE_UNSUPP            /* unsupported */
};


}

#endif //TYPES_H
