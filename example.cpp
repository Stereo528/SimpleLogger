#include "logger.h"

using namespace SimpleLogger;

int main(){
    Logger log;
    log.info("This is an info message!");
    log.debug("This is a debug message!");
    log.warn("This is a warning!");
    log.error("Something went wrong!");
    log.fatal("This is a fatal error!");

    log.log(log.INFO, "This is an info message using log()!");
    log.log(log.DEBUG, "This is a debug message using log()!");
    log.log(log.WARNING, "This is a warning using log()!");
    log.log(log.ERROR, "Something went wrong using log()!");
    log.log(log.FATAL, "This is a fatal error using log()!");

    return 0;
}