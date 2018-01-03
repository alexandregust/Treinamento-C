#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

double A;
double B;
double C;
double TRI;
double CIR;
double TRA;
double QUA;
double RET;

scanf("%lf %lf %lf",&A,&B,&C);

TRI = A * C/2;
CIR = pow(C,2) *  3.14159;
TRA = C * (A + B)/2;
QUA = B * B;
RET = A * B;

printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRI,CIR,TRA,QUA,RET);

return 0;

}
