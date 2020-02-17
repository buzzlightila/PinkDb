void createTable (char* tableName) {
  char type[10], field[10], breakPoint[1];
  FILE* arq;
  Database data;
  arq = fopen("data/database.dat", "rb");
  fread(&data, sizeof(Database), 1, arq);
  // string, int, bool
  data.tables[0].id = 1;
  strcat(data.tables[0].name, tableName);
  while (strcmp(breakPoint, ";") != 0) {
    printf("columns> ");
    scanf("%s %s%s", type, field, breakPoint);
    strcat(data.tables[0].fields, ("%s %s %s\n", type, field, breakPoint));
  };
  fwrite(&data, sizeof(Database), 1, arq);
  fclose(arq);
}
