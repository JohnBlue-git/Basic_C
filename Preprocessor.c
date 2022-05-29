/*
 Auther: John Blue
 Time: 2022/6
 Platform: atom
 Object: to show how to use preprocessor
 Reference: https://hackmd.io/@sysprog/c-preprocessor

 preprocessor
可作compile之前的操作 #include, #define, ...
也可做巨集

 macro巨集
 指將一段較長的程式碼集合在一起，給以命名，而後在程式中可以使用該命名，則程式段將取代命名而用以執行
 */

#include <stdio.h>

#define DEBUG 1
#define VC_V10 0// or you can toggle this line, the result is same

int main()
{

  #if (DEBUG && !VC_V10)
      printf("DEBUG is defined");
  #elif (!DEBUG && VC_V10)
      printf("VC_V10 is defined");
  #elif (DEBUG && VC_V10)
      printf("DEBUG and VC_V10 are defined");
  #else
      printf("DEBUG and VC_V10 are not defined");
  #endif
}
