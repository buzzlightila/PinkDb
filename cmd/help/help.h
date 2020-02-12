void help () {
  printf("%30s", "==================\n");
  printf("%30s", "Welcome to PinkDb!\n");
  printf("%30s", "==================\n");
  printf("<options> <params> <seila>\n");
  printf("Commands:\n");
  printf("  create database <name>                                create a database\n");
  printf("  create database.table <name>                          create a simple table on database\n");
  printf("  create database.table.columns (id: Int, name: string) create one or multiple columns\n");
  printf("  show database                                         show all databases\n");
  printf("Columns Type:\nString\nInt\nBool\nSeila\nStruct\n");
}
