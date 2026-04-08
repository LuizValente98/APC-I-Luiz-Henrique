#include <stdio.h>
#include <math.h>


int main(){

int op1;
int op2;

printf("Entre com um numero inteiro:");
scanf("%i", &op1);
while (getchar()!= '\n');

printf("Entre com outro numero inteiro:");
scanf("%i", &op2);
while (getchar()!= '\n');



int soma = op1 + op2;
int sub = op1 - op2;
int mult = op1*op2;
float div = op1 / op2;
int resto = op1 % op2; //mod


printf("%i + %i = %i\n", op1,op2, soma );
printf("%i - %i = %i\n", op1,op2, sub );
printf("%i * %i = %i\n", op1,op2, mult );
printf("%i / %i = %.2f\n", op1,op2, div );

div = (op1 * 1.0f) / op2;

printf("%i / %i = %.2f\n", op1,op2, div);

double potenc = pow(2,3);
double raiz_2  = sqrt(2);
double loga = log(2);
double seno = sin (2*3.14/180); 


    return 0 ;
    
}