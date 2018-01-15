#include <stdio.h>
/*
  hello
*/
char*inc="\\#include <stdio.h>",dc='"',*p="%s%c/*%c  hello%c*/%cchar*inc=%c%c%s%c,dc='%c',*p=%c%s%c, *m=%c%s%c,n='%cn';%cvoid init_i(){int i=0;i=1;}", *m="int main(){%c/*%c  world%c*/%cinit_i();printf(p, inc+1, n, n, n, n, dc, *inc, inc, dc,  dc, dc, p, dc, dc, m, dc, *inc, n);return!printf(m, n, n, n, n, n);}%c",n='\n';
void init_i(){int i=0;i=1;}int main(){
/*
  world
*/
init_i();printf(p, inc+1, n, n, n, n, dc, *inc, inc, dc,  dc, dc, p, dc, dc, m, dc, *inc, n);return!printf(m, n, n, n, n, n);}
