#include <stdlib.h>
#include <stdio.h>


int main() {

float x;

  scanf("%f",&x);

if (x >= 0.0 && x <= 25.0 )
printf("Intervalo [0,25]\n");
if (x > 25.0 && x <= 50.0 )
printf("Intervalo (25,50]\n");
if (x > 50 && x <= 75.0 )
printf("Intervalo (50,75]\n");
if (x > 75.0 && x <= 100.0 )
printf("Intervalo (75,100]\n");
if (x < 0.0 || x > 100.0)
printf("Fora de intervalo\n");

return 0;

}
