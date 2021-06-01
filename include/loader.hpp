#ifndef LOADER_H
#define LOADER_H

#include <string>
#include <cstdio>

extern char gMemory[0xFFFF];

namespace Fam::Loader 
{

int loadRom(std::string& path);

}

#endif //LOADER_H
