#include "logger.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>

void log(LogLevel log_level, const char* message, ...) {
  const char *level_names[] = {"TRACE", "DEBUG", "INFO", "WARN", "ERROR",
    "FATAL"};

  time_t now;
  time(&now);
  printf("%s [%s]: %s\n", ctime(&now), level_names[log_level], message);
}
