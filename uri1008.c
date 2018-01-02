#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
int NUMERO;
int HORAS;
float VALOR;
float SALARIO;
scanf("%d",&NUMERO);
scanf("%d",&HORAS);
scanf("%f",&VALOR);


SALARIO = HORAS * VALOR;

printf("NUMBER = %d\n",NUMERO);
printf("SALARY = U$ %.2f\n",SALARIO);




return 0;



}
