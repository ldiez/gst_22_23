#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int Func1(int i)
{
  // return i != 6 ? i : -1;
  return i;
}



int main()
{
  int ret = 0;
  for (int i = 0; i < 10; ++i)
  {
    if (Func1(i) == i)
    {
      printf("**** PASS: Func1 with input %d\n", i);
    }
    else
    {
      printf("**** FAILED: Func1 with input %d\n", i);
      // assert(false && "**** FAILED: Func1 with input %d\n");
      ret = -1;
    }
  }
  return ret;
}
