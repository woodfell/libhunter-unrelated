#include <stdio.h>
#include <libhunter-unrelated/unrelated.h>

void hunter_unrelated(const char *parent)
{
  printf("hunter_unrelated v1.0.0 (%s)\n", parent ?: "(none)");
}
