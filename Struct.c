/*
Auther: John Blue
Time: 2022/6
Platform: atom
Object: display Enum and Union

Struct
is a user defined type (data structure)

Typedef
is an alias (another name) of structure
this also applies to union and enum ...
*/

#include <stdio.h>

typedef struct longlonglong Box1;// Box1 is another name of longlonglong

struct longlonglong {
  int i;
  char c;
  char* s;
} bx2;// bx2 is already a struct variable

int main() {
  struct longlonglong bx;
  bx.i = 0;

  // another way to define simple struct and to assign
  /*struct longlonglong bx = {
    .i = 0,
    .c = ' ',
    .s = "hello"
  };*/

  Box1 bx1;
  bx1.s = "hello";

  bx2 = bx;// assignment operator
}
