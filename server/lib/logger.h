#ifndef LOGGER_H
#define LOGGER_H

typedef enum {
  TRACE,
  DEBUG,
  INFO,
  WARN,
  ERROR,
  FATAL
} LogLevel;

void log(LogLevel log_level, const char* message);

#endif /* LOGGER_H */
