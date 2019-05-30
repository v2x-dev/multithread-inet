#ifndef __PANAGIS_LOGGER_LOGGER_H_
#define __PANAGIS_LOGGER_LOGGER_H_

#include <iostream>
#include <fstream>

namespace Panagis {

namespace Logger {

class Logger
{
    private:
        std::ofstream _file;
    public:
        Logger(std::string fileName);
        void log(std::string content);
        void closeFile();
        ~Logger();
};

} // namespace Logger

} // namespace Panagis

#endif // ifndef __PANAGIS_LOGGER_LOGGER_H_
