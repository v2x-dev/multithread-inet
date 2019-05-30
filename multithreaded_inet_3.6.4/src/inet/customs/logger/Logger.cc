#include "Logger.h"
#include <fstream>

namespace Panagis {

namespace Logger {

Logger::Logger(std::string fileName) {
    _file.open(fileName);
    if (!_file.is_open())
        throw std::runtime_error("Can't open file " + fileName + " for write at inet/src/inet/customs/logger/Loger.cc : Logger::Logger(std::string fileName)");
}

void Logger::log(std::string content) {
    _file << content;
    _file << std::endl;
}

void Logger::closeFile() {
    _file.close();
}

Logger::~Logger() {
    _file.close();
}

} // namespace Logger

} // namespace Panagis
