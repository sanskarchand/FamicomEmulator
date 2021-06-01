#include "logger.hpp"

namespace Fam::Logger
{


void Logger::log_impl(LogLevel level, std::string message, std::string file, int line)
{
    LogMsg msg = { message, level, file, line, std::chrono::system_clock::now() }; 
    messages.push_back(msg);

    if (out_stream) {
        //out_stream << std::format("{}", message) << "\n";
        out_stream << message <<  "\n";
    }

}


}
