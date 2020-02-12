#include "database.h"
void create (char* params, char* seila) {
  if (strcmp(params, "database") == 0) createDatabase(params, seila);
}
