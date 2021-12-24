#include <stdbool.h>

void _if(bool value, void (*func1)(), void (*func2)())
{
  if (value)
    func1();
  else
    func2();
}
