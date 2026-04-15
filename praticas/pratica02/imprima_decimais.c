// nesta pratica eu:
// imprimir o número 3.1415926 com todas as casas e também com apenas duas casas;
 #include <stdio.h> 

int main (){
float pi = 3.1415926;

printf("=======================================================\n");
printf("Esse eh o numero PI com 7 casas decimais: | %.7f |\n",pi);
printf("Esse eh o numero PI com 2 casas decimais: | %.2f      |\n", pi);
printf("=======================================================\n");

return 0;
 }