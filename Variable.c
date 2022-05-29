/*
Auther: John Blue
Time: 2022/6
Platform: atom
Object: variable type (..., static, const, ...)
*/

#include <stdio.h>

// Global variable declaration:
const int cgb = 3;
int gb = 36;

// when use extern, means that this variable already exist in other file (it can be declare everwhere if needed)
extern int etn;

// Static duration means that the object or variable is allocated when the program starts and is deallocated when the program ends
// we can use it in the scope, count how many time we used it since the progam start
// but outside of this function, we still cannot acces this value
//
static int sto = 9;
//
void fun_sti() {
  static int sti = 0;
  sti++;
  printf("sti = %d\n", sti);
}

int main()
{
  ////// Const
  const int av = 33;// must assign in the first stage
  int bc = av;// copy const
  //int& ar = av;// not workable, av is const
  //int& const t;// no such things
  // point a const
  const int * ap1 = &av;// std::cout << *ap1 << std::endl;
  int const * ap2 = &av;// std::cout << *ap1 << std::endl;
  const int * const ap3 = &av;
  //const int const * ap4;// no such thing
  int const * const ap4 = &av;
  //int* ap4 = &av;// not workable, the address space is fixed

  ////// Static
  fun_sti();// av = 1
  fun_sti();// av = 2
  fun_sti();// av = 3
}
