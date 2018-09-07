#include <stdio.h>

int main()
{
  int c;
  FILE *fp;

  fp = fopen("Log.txt", "a+");


  
  
  while((c = getchar()) != EOF)
    fputc(putchar(c),fp);

  fclose(fp);

  return (0);
  
}

