#include <sqlite3.h>
#include "clients_management.h"

#define DB_FILE_NAME "clients.db"

static sqlite3 *db;

void clients_management_init(void) {
  int rc;

  rc = sqlite3_open(DB_FILE_NAME, &db);
}
