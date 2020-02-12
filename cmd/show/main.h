#include "database.h"
void show (char* params, char* seila) {
  if (strcmp(params, "database") == 0) showDatabase(params, seila);
}
