#include "cpu.hpp"
#include "loader.hpp"
#include "logger.hpp"
#include <string>
//#include <format>


/* initialize globals */
char gMemory[0xFFFF] = { 0 };



int main(int argc, char *argv[])
{

    std::string rom_path = "res/Donkey Kong (World) (Rev A).nes";
    Fam::Loader::loadRom(rom_path);
    Fam::Logger::Logger logger;

    logger.log(Fam::Logger::LogLevel::INFO, "Hey yo");

    return 0;

}
