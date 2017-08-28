#include <syslog.h>

int main(int argc, char **argv)
{
    openlog(argv[0], LOG_CONS | LOG_PID, LOG_USER);

    closelog();

    return 0;
}
