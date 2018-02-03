#include <stdlib.h>
#include <stdio.h>

int main() {

int x100, x50, x20, x10 , x5 , x2, x1, r100, r50, r20, r10, r5, y ;

scanf("%d",&y);

x100 = y / 100;
r100 = y % 100;
x50 = r100 / 50;
r50 = r100 % 50;
x20 = r50 / 20;
r20 = r50 % 20;
x10 = r20 / 10;
r10 = r20 % 10;
x5 = r10 / 5;
r5 = r10 % 5;
x2 = r5 / 2;
x1 = r5 % 2;
printf("%d\n", y );
printf("%d nota(s) de R$ 100,00\n" , x100 );
printf("%d nota(s) de R$ 50,00\n" , x50 );
printf("%d nota(s) de R$ 20,00\n" , x20 );
printf("%d nota(s) de R$ 10,00\n" , x10 );
printf("%d nota(s) de R$ 5,00\n" , x5 );
printf("%d nota(s) de R$ 2,00\n" , x2 );
printf("%d nota(s) de R$ 1,00\n" , x1 );

return 0;

}
