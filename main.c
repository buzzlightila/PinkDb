#include <stdio.h>
#include <string.h>
#include "cmd/help/help.h"
#include "cmd/struct/Table.h"
#include "cmd/create/main.h"
#include "cmd/show/main.h"

typedef enum {true, false} bool;

int main () {
  bool quit = true;
  char cmd[10], params[10], name[10] = "";
  while(quit == true) {
    printf("au> ");
    scanf("%s %s %s", cmd, params, name);

    if (strcmp(cmd, "q") == 0 || strcmp(cmd, "quit") == 0) quit = false;
    else if (strcmp(cmd, "help") == 0) help();
    else if (strcmp(cmd, "create") == 0) create(params, name);
    else if (strcmp(cmd, "show") == 0) show(params, name);
    else printf("auauau: Unknow '%s' command. Use help\n", cmd);
  }
  return 0;
}
