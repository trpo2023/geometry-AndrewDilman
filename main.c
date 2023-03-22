#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Point {
  float x;
  float y;
};

struct WKTcircle {
  struct Point point;
  float rad;
};

int main() {
  FILE *myfile;
  myfile = fopen("circle.txt", "r");

  if(myfile==0){
    printf("no such file in derictory \n");
    return 0;
  }

  char *type;
  char line[100];
  char line1[100];

  struct WKTcircle c1;
  while ((fgets(line, 100, myfile)) != 0) {
    strcpy(line1, line);
    //printf("%s \n ", line1);
    type = strtok(line1, "(");
    //printf("%s, %s \n ", line1, type);
    if (strcmp(type, "circle") == 0) {
      if ((sscanf(line, "circle(%f %f, %f)", &c1.point.x, &c1.point.y, &c1.rad)) == 3)
        printf("circle(%f %f  %f) \n", c1.point.x, c1.point.y, c1.rad);
      else
        printf("incorrect data of points of circle. Expected NUM NUM, NUM \n");
    }
    else
      printf("Incorrect type of figure format. Expected: \"Circle\" \n");
  }
  return 0;
}
