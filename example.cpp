#include "logger.h"

using namespace SimpleLogger;

int main(){
    Logger log;
    log.info("This is an info message!");
    log.debug("This is a debug message!");
    log.warn("This is a warning!");
    log.error("Something went wrong!");
    log.fatal("This is a fatal error!");

    return 0;
}