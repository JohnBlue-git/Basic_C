/*
Auther: John Blue
Time: 2022/6
Platform: atom
Object: to use FILE
*/

#include <stdio.h>

int main()
{
  FILE *fp1, *fp2, *fp3;
  fp1 = fopen("file.txt", "r");// r:read w:write a:read/write
  fp2 = fopen("file.txt", "a");
  // read
  if (fp1 == 0){
    puts("File not exsits!");
  }
  else {
    printf("Reading ...\n");
    char ch;
    int i = 0;
    while (ch != EOF) {
      ch = fgetc(fp1);
      printf("%c", ch);
    }
    printf("\n");
    fclose(fp1);
  }
  // write
  if (fp2 == 0){
    puts("File not exsits!");
  }
  else {
    //char ch;
    //while (ch != EOF) {
    //  ch = fgetc(fp2);
    //}
    printf("Writing ...\n");
    fprintf(fp2, "%d", 3);
    fclose(fp2);
  }
}
