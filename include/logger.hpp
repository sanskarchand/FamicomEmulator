#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <chrono>
#include <vector>
#include <iostream>

namespace Fam::Logger
{

using Clock = std::chrono::high_resolution_clock;

enum LogLevel {
    INFO,
    DEBUG
};

struct LogMsg {
    std::string message;
    LogLevel level;
    std::string file;
    int line;
    std::chrono::time_point<Clock> time_stamp;
};

class Logger 
{
public:
    Logger(std::ostream& out_stream = std::cout): out_stream(out_stream) { }
    inline void log(LogLevel level, std::string message)
    {
        log_impl(level, message, __FILE__, __LINE__);
    }
    void log_impl(LogLevel level, std::string message, std::string file, int line);
    

private:
    std::ostream& out_stream;
    std::vector<LogMsg> messages;

};



}   //end namespace 

#endif //LOGGER_H
