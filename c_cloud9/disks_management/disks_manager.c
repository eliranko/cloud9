#include <sqlite3.h>
#include <syslog.h>
#include "disks_manager.h"

#define SQL_DB_NAME "data.db"

static sqlite3 *db;

static int init_db(void)
{
    return sqlite3_open(SQL_DB_NAME, &db);
}

int init_disks_manager(void)
{
    int db_open_error_code;
    if((db_open_error_code = init_db()) != SQLITE_OK) {
        syslog(LOG_EMERG, "Sqlite failed to open db with error: %d", db_open_error_code);
        return INIT_FAILURE;
    }
}

FileInfo* get_base_level_file_info(void)
{
    
}

FileInfo* get_next_level_file_info(FileInfo *file_info)
{
    
}