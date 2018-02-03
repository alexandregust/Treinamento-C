#include <stdlib.h>
#include <stdio.h>

int main() {

int x,a,m,d,ra;

scanf("%d",&x);

a = x / 365;
ra = x % 365;
m = ra / 30;
d = ra % 30 ;

printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n" ,a,m,d);

return 0;

}
