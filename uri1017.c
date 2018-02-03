#include <stdlib.h>
#include <stdio.h>

int main() {

int temp , vel ;
float vol;


scanf("%d",&temp);
scanf("%d",&vel);

vol = (vel * temp)/12.0;

printf("%.3f\n",vol);

return 0;

}
