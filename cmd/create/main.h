#include "database.h"
#include "table.h"

void create (char* params, char* seila) {
  if (strcmp(params, "database") == 0) createDatabase(params, seila);
  if (strcmp(params, "table") == 0) createTable(seila);
}
