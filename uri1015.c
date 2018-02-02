#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {


float x1;
float x2;
float y1;
float y2;
float dist;

scanf("%f %f/n",&x1,&y1);
scanf("%f %f",&x2,&y2);;

dist = pow((pow((x2 - x1),2.0) + pow((y2 - y1),2.0)),1.0/2.0);



printf("%.4f\n",dist);

return 0;

}
