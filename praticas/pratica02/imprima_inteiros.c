/*nesta pratica eu:
Imprimir os números 10, -5e 00004;
*/

#include <stdio.h>
int main(){

int dez = 10;
int cinco = 5;
int four = 00004;

cinco = cinco * -1;
printf("=================================\n");
printf("Abaixo os numeros inteiros:\n ");
printf("%i       %i        %05d\n",dez, cinco, four );
printf("=================================\n");

    return 0;

}