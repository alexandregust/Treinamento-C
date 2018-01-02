#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){

double B;
double A;
double MEDIA;
double SOMATORIO;

scanf("%lf",&A);
scanf("%lf",&B);

SOMATORIO = 3.5 * A + 7.5 * B;
MEDIA = SOMATORIO/11.0;


printf("MEDIA = %.5lf\n",MEDIA);



return 0;



}
