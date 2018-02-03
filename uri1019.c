#include <stdlib.h>
#include <stdio.h>

int main() {

int x,h,m,s,m1;

scanf("%d",&x);

m1 = x / 60;
s = x % 60;
m = m1 % 60;
h = m1 / 60 ;

printf("%d:%d:%d\n" ,h,m,s );

return 0;

}
