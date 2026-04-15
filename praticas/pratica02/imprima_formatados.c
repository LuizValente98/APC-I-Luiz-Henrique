/*Nesta pratica eu:
 imprimir um cupom fiscal conforme layout abaixo:

==============================
      N O T A    L E G A L
==============================
Produto         Qtd Valor Unit
Camiseta        002      39.99
Calca           001      89.90
Meia Social     003      19.99
==============================
Total                   229.85

*/

#include <stdio.h>

int main(){

char cami[10] =  "Camiseta";
char Cal[10] =  "Calca";
char meia[20] =  "Meia Social"; 
int qtd = 002;
float valor = 39.99;
float valor_tot = 0.0;


printf("======================================\n");
printf("          N O T A    L E G A L        \n");
printf("======================================\n");
printf("Produto        Qtd      Valor Unit\n");
printf("%s  %7i  %12.2f\n",cami, qtd , valor);

valor_tot = valor;
qtd = 001;
valor = 89.90;

printf("%s %11i %13.2f\n",Cal, qtd , valor);

valor_tot = valor_tot + valor;
qtd = 003;
valor = 19.99;

printf("%s %5i %13.2f\n",meia, qtd , valor);

valor_tot = valor_tot + valor;
printf("======================================\n");
printf("Total %26.2f\n", valor_tot);


    return 0 ;
}