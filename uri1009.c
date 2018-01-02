#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
char NOME;
double FIXO;
double VENDAS;
double SALARIO;

scanf("%s",&NOME);
scanf("%lf",&FIXO);
scanf("%lf",&VENDAS);


SALARIO = VENDAS * 0.15 + FIXO;

printf("TOTAL = R$ %.2lf\n",SALARIO);





return 0;



}
