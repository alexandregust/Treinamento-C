#include <stdlib.h>
#include <stdio.h>

int main() {
    int x100, x50, x20, x10, x5, x2;
    int x1, x50c, x25c, x10c, x05c, x1c;
    double x;

    scanf("%lf", &x);
    int z = x;
    int y = (x - z) * 100;

    if((y * 1000) % 10 == 9){
        y++;
    }

x100 = z/100;z = z%100;
x50 = z/50;z = z%50;
x20 = z/20;z = z%20;
x10 = z/10;z = z%10;
x5 = z/5;z = z%5;
x2 = z/2;z = z%2;

x1 = z;
x50c = y/50;y = y%50;
x25c = y/25;y = y%25;
x10c = y/10;y = y%10;
x05c = y/5;y = y%5;
x1c = y++;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", x100);
    printf("%d nota(s) de R$ 50.00\n", x50);
    printf("%d nota(s) de R$ 20.00\n", x20);
    printf("%d nota(s) de R$ 10.00\n", x10);
    printf("%d nota(s) de R$ 5.00\n", x5);
    printf("%d nota(s) de R$ 2.00\n", x2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", x1);
    printf("%d moeda(s) de R$ 0.50\n", x50c);
    printf("%d moeda(s) de R$ 0.25\n", x25c);
    printf("%d moeda(s) de R$ 0.10\n", x10c);
    printf("%d moeda(s) de R$ 0.05\n", x05c);
    printf("%d moeda(s) de R$ 0.01\n", x1c);

    return 0;}
