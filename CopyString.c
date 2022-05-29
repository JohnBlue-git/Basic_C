/*
Auther: John Blue
Time: 2022/6
Platform: atom
Object: to do string copying
Reference: https://www.cplusplus.com/reference/cstring/memcpy/
*/

#include <stdio.h>
#include <string.h>// for memcpy(...), str...(...)

struct {
  char name[40];
  int age;
} person, person_copy;

int main()
{
  int oi = 16;
  char* ori = "Hello World";

  //void* memcpy(void* s1, const void* s2, size_t n);
  memcpy((void*)person.name, ori, strlen(ori) + 1);// strlen(ori) + 1 ? seem to have no effect
  person.age = oi;//memcpy((void*)person.name, oi, sizeof(int));// something wrong @@
  memcpy(&person_copy, &person, sizeof(person));
  printf(" person name = %s\n person age = %d\n\n", person_copy.name, person_copy.age);
  // short name
  //char* cp1;// not work for copying
  char cp1[6];// since Hello\0 : 1...5+1
  if (cp1 != ori) {
    memcpy(cp1, ori, sizeof(ori) + 1);
    printf("cp1 name = %s\n\n", cp1);
  }

  //char* strcpy(char* s2, const char* s1);
  //char* cp2;// not work for copying
  char cp2[6];// but cannot be too short, ori will be destroyed @@
  if (cp2 != ori) {
    strcpy(cp2, ori);// if cp2 is short, strcpy will extend cp2 to match ori
    printf("cp2 name = %s\n\n", cp2);
  }

  //char* strncpy(char* s2, const char* s1, size_t n);
  char cp3[18];// suggest to longer than ori, or it will malfunction
  if (cp3 != ori) {
    strncpy(cp3, ori, sizeof(cp3));// copy ori with len of cp3
    printf("cp3 name = %s\n\n", cp3);
    strncpy(cp3, ori, 5);// partially copy
    cp3[6] = '\0';
    printf("partial name = %s\n\n", cp3);
  }
}
