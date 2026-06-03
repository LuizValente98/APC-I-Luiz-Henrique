#include <stdio.h>

int main() {

int idade = 0;

printf("Entre com a sua idade :");
scanf("%i", &idade);

int eh_maior_que_16_anos = idade >= 16;

if (eh_maior_que_16_anos) {
   // printf("com %i anos voce pode votar!\n", idade);
} else{
    //printf("com %i anos voce nao pode votar!\n", idade);
}

int eh_maior_que_18_anos = idade >= 18;
int eh_menor_que_18_anos = !eh_maior_que_18_anos;
int eh_menor_que_70_anos = idade < 70;

if(eh_maior_que_18_anos && eh_menor_que_70_anos) {
    //printf("com %i anos voce tem que votar !\n", idade);
}

if(eh_menor_que_18_anos){
printf("com %i anos voce pode votar!\n", idade);
}
else if(eh_maior_que_16_anos && eh_menor_que_18_anos) {
    printf("com %i anos voce pode votar!\n", idade);
}else if (eh_menor_que_18_anos && eh_menor_que_70_anos) {
    printf("com %i anos voce tem que votar!\n");
}
else{
    printf("com %i anos voce pode votar!\n", idade);
}


    return 0;
}