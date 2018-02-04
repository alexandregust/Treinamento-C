#include <stdlib.h>
#include <stdio.h>


int main() {

float y;
int z,x;

scanf("%d %d",&x,&z);

if (x == 1) {y = z * 4.0;
printf("Total: R$ %.2f\n",y);}
if (x == 2) {y = z * 4.5;
printf("Total: R$ %.2f\n",y);}
if (x == 3) {y = z * 5.0;
printf("Total: R$ %.2f\n",y);}
if (x == 4) {y = z * 2.0;
printf("Total: R$ %.2f\n",y);}
if (x == 5) {y = z * 1.5;
printf("Total: R$ %.2f\n",y);}

return 0;

}
