/*
Auther: John Blue
Time: 2022/6
Platform: atom
Object: display array and dynamic allocation

malloc可以配置空間
calloc可以配置空間 同時設定初始值為0
*/

#include <stdio.h>
#include <stdlib.h>// is suggested to include for malloc, calloc

int main()
{
  // (1) 1D
  int y[10] = { 1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++)
  {
      y[i] = i;
  }

  // (2) 1D
  int* x; // or x[]
  x = malloc(sizeof(int) * 10);
  for (int i = 0; i < 10; i++)
  {
      x[i] = i;
  }
  free(x);

  // (3) 2D
  int yy[2][1] = {{1}, {2}};
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 1; j++) {
      yy[i][j] = i + j;
    }
  }

  // (4) 2D
  int** m;
  m = calloc(2, sizeof(int*));
  for (int i = 0; i < 2; i++)
  {
      m[i] = calloc(1, sizeof(int));
      for (int j = 0; j < 1; j++)
      {
          m[i][j] = i + j;
      }
  }
  free(m);
}
