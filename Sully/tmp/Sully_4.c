#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char dc = '"';
char n = 10;
int i = 4;
if (i <= 0)
return 0;
char file_name[256];
if (strcmp("Sully.c", __FILE__) != 0)
{
i--;
sprintf(file_name, "Sully_%d.c", i);
}
else
sprintf(file_name, "Sully_%d.c", i);
FILE *file = fopen(file_name, "w");
if (file == NULL)
return 0;
char *buff = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c%1$cint main()%1$c{%1$cchar dc = '%2$c';%1$cchar n = 10;%1$cint i = %3$d;%1$cif (i <= 0)%1$creturn 0;%1$cchar file_name[256];%1$cif (strcmp(%2$cSully.c%2$c, __FILE__) != 0)%1$c{%1$ci--;%1$csprintf(file_name, %2$cSully_%%d.c%2$c, i);%1$c}%1$celse%1$csprintf(file_name, %2$cSully_%%d.c%2$c, i);%1$cFILE *file = fopen(file_name, %2$cw%2$c);%1$cif (file == NULL)%1$creturn 0;%1$cchar *buff = %2$c%4$s%2$c;%1$cfprintf(file, buff, n,dc, i, buff);%1$cfclose(file);%1$cchar buff2[500];%1$csprintf(buff2, %2$cclang -Wall -Wextra -Werror -o %%.*s %%s%2$c, (int)strlen(file_name)-2, file_name, file_name);%1$csystem(buff2);%1$csprintf(buff2, %2$c./%%.*s%2$c, (int)strlen(file_name)-2, file_name);%1$csystem(buff2);%1$c}%1$c";
fprintf(file, buff, n,dc, i, buff);
fclose(file);
char buff2[500];
sprintf(buff2, "clang -Wall -Wextra -Werror -o %.*s %s", (int)strlen(file_name)-2, file_name, file_name);
system(buff2);
sprintf(buff2, "./%.*s", (int)strlen(file_name)-2, file_name);
system(buff2);
}
