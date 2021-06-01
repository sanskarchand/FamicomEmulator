#include "loader.hpp"
#include "types.hpp"

namespace Fam::Loader 
{

int loadRom(std::string& path)
{
    //Sec 1 -  Read the file into an appropriate buffer
    FILE *file = fopen(path.c_str(), "rb");
    if (file == NULL) {
        return -1;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    rewind(file);

    char *buffer = new char[file_size + 1]; //malloc(file_size + 1);
    fread(buffer, 1, file_size, file);
    buffer[file_size] = 0;

    fclose(file);

    //Sec 2 - parse the file
    //printf("First three bytes %c%c%c\n", buffer[0], buffer[1], buffer[2]);
    RomFileType type = RomFileType::ROM_FTYPE_UNSUPP;

    if (buffer[0] == 'N' && buffer[1] == 'E' && buffer[2] == 'S') {
        type = RomFileType::ROM_FTYPE_INES;
    } 

    if (type == RomFileType::ROM_FTYPE_UNSUPP) {
        return -1;
    }

    /* TODO:
     *  map ROM to RAM
     *  maybe extract some metadata
     */
    
    delete[] buffer;
    return 1; 
}


}
