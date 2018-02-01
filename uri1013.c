#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

int a, b, c ;
scanf("%d\n",&a);
scanf("%d\n",&b);
scanf("%d",&c);

if (a > b && a > c)
  printf("%d eh o maior\n",a );

if (b > a && b > c)
  printf("%d eh o maior\n",b );

if (c > b && c > a)
  printf("%d eh o maior\n",c );


return 0;

}
