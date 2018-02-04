#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

  double a ,b ,c , x1, x2;

scanf("%lf", &a);
scanf("%lf", &b);
scanf("%lf", &c);

  if (a > 0 && pow(b,2.0)- 4.0 * a * c >= 0) {
    x1 = (-b + pow(pow(b,2.0)- 4.0 * a * c,0.5))/(2 * a);
    x2 = (-b - pow(pow(b,2.0)- 4.0 * a * c,0.5))/(2 * a);

    printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
}
    else
      printf("Impossivel calcular\n");



return 0;

}
