#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {


double raio;
double area;

scanf("%lf",&raio);

area = 4.0/3.0 * 3.14159 * pow(raio,3.0);

printf("VOLUME = %.3lf\n",area);

return 0;

}
