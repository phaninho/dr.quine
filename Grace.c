#include <stdio.h>
#define Q(x)char*s=#x;x
#define MULT(x, y) (x)*(y)
#define hello(a) printf(#a)
/*jaime les commentaires*/
Q(int main(){FILE* fichier = NULL;fichier = fopen("Grace_kid.c", "w");fputs("#include <stdio.h>\n#define Q(x)char*s=#x;x\n#define MULT(x, y) (x)*(y)\n#define hello(a) printf(#a)\n/*jaime les commentaires*/\nQ(", fichier);fputs(s, fichier);fputs(")\n", fichier);})
