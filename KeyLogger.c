#include <stdio.h>

int main()
{
  int c;
  FILE *fp;

  //fp = fopen("/home/centralsystem/Escritorio/SO/TareaMoral/Log.txt", "a+");
  fp = fopen("Log.txt", "a+");


  
  
  while((c = getchar()) != EOF)
    fputc(putchar(c),fp);

  fclose(fp);

  return (0);
  
}

