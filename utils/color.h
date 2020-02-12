#include <stdlib.h>
void choseColor (char color[]) {
  int colorNumber = 0;
  char finalColor[11] = "\033";
  if(strcmp(color, "reset") != 0) {
    colorNumber = (rand() % (13 - 1 + 1)) + 1;
  }
  char colors[13][7] = {
  "[0m",
  "[0;31m",
  "[1;31m",
  "[0;32m",
  "[1;32m",
  "[0;33m",
  "[01;33m",
  "[0;34m",
  "[1;34m",
  "[0;35m",
  "[1;35m",
  "[0;36m",
  "[1;36m"
  };
  strcat(finalColor, colors[colorNumber]);
  printf("%s", finalColor);
}
