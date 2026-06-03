#include <stdio.h>

int main() {

// Cria um conjunto de 10 inteiros.
                 //  0 1 2 3 4 5 6 7 8 9
int numeros[10]; //  |  |  | |  |  |  |   |  |  |  |

numeros[0] = 10; //   |10|  |  |  |  |  |   |  |  |  |
numeros[1] = 6; //    |10| 6|  |  |  |  |   |  |  |  |
numeros[2] = 7; //    |10| 6| 7|  |  |  |   |  |  |  |
numeros[3] = 0; //    |10| 6| 7| 0|  |  |   |  |  |  |
numeros[4] = 5; //    |10| 6| 7| 0| 5|  |   |  |  |  |
numeros[5] = 3; //    |10| 6| 7| 0| 5| 3|   |  |  |  |
numeros[6] = 2; //    |10| 6| 7| 0| 5| 3|  2|  |  |  |
numeros[7] = 1; //    |10| 6| 7| 0| 5| 3|  2| 1|  |  |
numeros[8] = 8; //    |10| 6| 7| 0| 5| 3|  2| 1| 8|  |
numeros[9] = 9; //    |10| 6| 7| 0| 5| 3|  2| 1| 8|9 |

int i;
for (int i=0; i < 10; i++) {
    printf("%i, ", numeros[i] );
}


 // cria um conjunto de 100 caracteres.
char nome[100]; // sabor string
printf("Entre com o seu nome: ");
scanf("%[^\n]s", nome); // não tem &
printf("Ola %s!\n", nome);

// Cria um conjunto de 3 flutuantes.
float notas[3]; 
printf("Entre com as notas do boletim: ");
for( int i = 0; i < 3; i++) {
printf("A%i = ", i +1);
scanf("%f", &notas[1]);
}
printf("Suas notas foram: ");
for(int i = 0; i < 3; i++) {
    printf("A%i = %.1f\n", i+1, notas[i]);
}

    return 0;
}