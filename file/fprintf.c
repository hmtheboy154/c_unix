#include <stdio.h>

int main(void)
{
  FILE *f = NULL;

  if ((f = fopen("test", "a")))
    {
      fprintf(f, "%s:%d\n", "test", 42);
      fclose(f);
    }
  return (0);
}
