#include <syslog.h>
#include "disks_management/disks_manager.h"

int main(int argc, char **argv)
{
    openlog(argv[0], LOG_CONS | LOG_PID, LOG_USER);
    
    init_disks_manager();
    
    closelog();
    
    return 0;
}