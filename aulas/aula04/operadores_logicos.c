#include <stdio.h>

int main (){

int idade;

printf("entre com a sua idade:");
scanf("%i", &idade);
while(getchar () != '\n');

// && => falso e qualquer coisa = semprre falso
printf("voce eh uma crianca? %i\n", idade >= 0 && idade <=12);

// || => 1 verdadeiro OU qualquer coisa = sempre verdadeiro
printf("voce tem prioridade para vacinar? %i\n", idade <= 6 || idade>= 60 );

printf("voce eh um adolescente? %i\n", idade > 12 && idade <16);

printf("voce eh um jovem? %i\n", idade >= 16 && idade <=20);
// ! => NÂO verdadeiro = falso, Não falso = Verdadeiro
printf("voce naum pode votar? %i\n", !(idade >= 16 ));

    return 0;

}