/*
Auther: John Blue
Time: 2022/6
Platform: atom
Object: display break continue control flow
*/

#include <stdio.h>

int main()
{
  for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 6; j++) {
          if (i == 0 && j == 4)
          {
              break;
          }
          if (i == 4) {
              continue;
          }
          printf("(%d,%d)\n", i, j);
      }
  }
}
