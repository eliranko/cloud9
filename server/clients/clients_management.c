#include "clients_management.h"
#include <sqlite3.h>
#include "logger.h"

#define DB_FILE_NAME "clients.db"

static sqlite3 *db;

void clients_management_init(void) {
  int rc;

  rc = sqlite3_open(DB_FILE_NAME, &db);
  if (rc) {
    log(LogLevel.ERROR, )
  }
}
