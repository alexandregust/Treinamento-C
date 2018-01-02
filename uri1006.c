#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){

double B;
double A;
double C;
double MEDIA;
double SOMATORIO;

scanf("%lf",&A);
scanf("%lf",&B);
scanf("%lf",&C);

SOMATORIO = 2.0 * A + 3.0 * B + 5.0 * C;
MEDIA = SOMATORIO/10.0;


printf("MEDIA = %.1lf\n",MEDIA);



return 0;



}
