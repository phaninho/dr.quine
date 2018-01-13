#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char dc = '"';
  char n = '\n';
  int i = 5;
  if (i <= 0)
    return 0;
  char file_name[256];
  sprintf(file_name, "Sully_%d.c", i);
  i--;
  FILE *file = fopen(file_name, "w");
  char *buff = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%cint main(){char db = '%c'; char n = '%cn';int i = %d;if (i <= 0)return 0; char file_name[16]; sprintf(file_name, %cSully_%%d.c%c, i);i--; FILE *file = fopen(file_name, %cw%c);char *buff=%c%s%c; fprintf(file, buff, dc, i, dc, dc, dc, dc, dc, buff, dc, dc, dc, dc, dc);%cfclose(file);%cchar buff2[500];%csprintf(buff2, %cclang -Wall -Wextra -Werror -o %%.*s %%s%c, (int)strlen(buff)-2, file_name,file_name);%csystem(buff2);%csprintf(buff2, %c./%%.*s%c, (int)strlen(buff), file_name);\nsystem(buff2);\n}";
  fprintf(file, buff, n, n, n, dc, n, i, dc, dc, dc, dc, dc, buff, dc, n, n, n, dc, dc, n, n, dc, dc);
  fclose(file);
  char buff2[500];
  sprintf(buff2, "clang -Wall -Wextra -Werror -o %.*s %s", (int)strlen(buff)-2, file_name, file_name);
  system(buff2);
  sprintf(buff2, "./%.*s", (int)strlen(buff), file_name);
  system(buff2);

  return 0;
}
