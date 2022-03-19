#include <stdlib.h>
#include <stdio.h>

int Func1(int i)
{
  return i != 8 ? i : -1;
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
      int ret = -1;
    }
  }
  return ret;
}
