#include "../struct/Database.h"

void createDatabase (char* params, char* seila) {
  FILE* arq;
  Database db;
  db.id = 1;
  strcat(db.name, seila);
  arq = fopen("data/database.dat", "wb");
  fwrite(&db, sizeof(Database), 1, arq);
  printf("created\n");
  fclose(arq);
}
