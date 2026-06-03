#include <stdio.h>

int main() {

int nota = 0;

printf("entr com uma nta de 1 a 5:");
scanf("%i", &nota);

// if(nota == 1){
//     printf("ganhou uma estrela *\n");
// }
// else if(nota == 2){
//     printf("ganhou duas estrelas **\n");
// }
// else if(nota == 3){
//     printf("ganhou tres estrelas ***\n");
// }
// else if(nota == 4){
//     printf("ganhou quatro estrelas ****\n");
// }
// else if(nota == 5){
//     printf("ganhou cinco estrela *****\n");
// }
// else {
//     printf("Nota invalida! tente de novo\n");
// }

switch (nota){
    case 1:
     printf("ganhou uma estrela *\n");
    break;
    case 2:
     printf("ganhou duas estrelas **\n");
    break;
    case 3:
     printf("ganhou tres estrelas ***\n");
    break;
    case 4:
     printf("ganhou quatro estrelas ****\n");
    break;
    case 5:
     printf("ganhou cinco estrela *****\n");
    break;
    default:
     printf("Nota invalida! tente de novo\n");

}

    return 0;
}