#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {


  int c1, c2, q1, q2;
  float v1 , v2;
  float total;

  scanf("%d %d %f",&c1,&q1,&v1);
  scanf("%d %d %f",&c2,&q2,&v2);

  total = v1 * q1 + v2 * q2;

  printf("VALOR A PAGAR: R$ %.2f\n",total);




return 0;



}
