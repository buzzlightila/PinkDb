void showDatabase() {
  FILE* arq;
  Database db;
  arq = fopen("data/database.dat", "rb");
  fread(&db, sizeof(Database), 1, arq);
  printf("id | name\n0%d | %s\n", db.id, db.name);
  fclose(arq);
}
