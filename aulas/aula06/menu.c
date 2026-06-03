#include <stdio.h>

int main() {

int opcao = 0;

do {   
printf("MENU PRINCIPAL\n");
printf("1- Conssultar o saldo\n");
printf("2- recarregar\n");
printf("3- ver menssagens\n");
printf("4 - Ver ligacoes\n");
printf("5 - sair\n");
printf("Escolha uma opção\n");
scanf("%i", &opcao);


switch (opcao) {
    case 1: printf("Seu saldo eh 10,00\n"); break;
    case 2: printf("Escolha entre 10 e 50\n"); break;
    case 3: printf("Voce nao tem menssagens\n"); break;
    case 4: printf("ultimas ligaçoes 99999-9999\n"); break;
    case 5: printf("Obrigado pelo conato! Ate logo\n"); break;
    default: printf("opcao invalida! tente de novo.\n");
}

 } while(opcao != 5);

printf("Obrigado pelo conato! Ate logo\n");

    return 0;
}