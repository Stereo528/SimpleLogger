#include <string>
#include <iostream>

namespace SimpleLogger {
    class Logger {
        public: 
            //The colors/ANSI codes for the logger break in Clion but seem to work everywhere else.
            void info(std::string message) {
                std::cout << "\x1B[32mINFO: " << message << "\x1B[0m\t\t" << std::endl;
            }
            void debug(std::string message) {
                std::cout << "DEBUG: " << message << std::endl;
            }
            void warn(std::string message) {
                std::cout << "\x1B[33mWARN: " << message << "\x1B[0m\t\t" << std::endl;
            }
            void error(std::string message) {
                std::cout << "\x1B[31mERROR: " << message << "\x1B[0m\t\t"  << std::endl;
            }
            void fatal(std::string message) {
                std::cout << "\x1B[41m\x1B[37mFATAL: " << message << "\x1B[0m\t\t" << std::endl;
            }
    };
}