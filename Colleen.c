#include <stdio.h>
/*hello*/
char*inc="\\#include <stdio.h>",n='\n',dc='"',*p="%s%c/*hello*/%cchar*inc=%c%c%s%c,n='%cn',dc='%c',*p=%c%s%c,%c*m=%c%s%c;%cvoid init_i(){int i=0;i=1;}%c%s%c",
*m="int main(){/*world*/init_i();return!printf(p, inc+1, n, n, dc, *inc, inc, dc, *inc, dc, dc, p, dc, n, dc, m, dc, n, n, m, n);}";
void init_i(){int i=0;i=1;}
int main(){/*world*/init_i();return!printf(p, inc+1, n, n, dc, *inc, inc, dc, *inc, dc, dc, p, dc, n, dc, m, dc, n, n, m, n);}
