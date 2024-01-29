// hamhanded.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "hamhanded.h"
#include <cctype>

// TODO: This is an example of a library function
int hhAdd(int a, int b)
{
  return a+b;
}

int hhCalc(const char* str)
{
  char c;
  int a = 0;
  while (0 != (c = *str++))
  {
    if (!isdigit(c))
    {
      continue;
    }

    a = a*10 + (c -'0');
  }
  return a;
}

