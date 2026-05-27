/* Declarar variáveis para armazenar a 
IDADE,
SEXO (M ou F),
ALTURA (ex.: 1.75),
PESO (ex.: 72.845) de uma pessoa, e em seguida, 
imprimir todos esses valores utilizando os especificadores de formato corretos*/


#include <stdio.h>

int main(){

    int idade;
    char sex;
    float altura;
    float peso;

    printf("========================================\n");
    printf("Qual sua idade?\n");
        scanf("%i", &idade);

do {
    printf("Qual seu sexo (M/F/O): \n");
        scanf(" %c", &sex); 
        
    /*coloquei do - while para testar e validar o caracter em 'char sex' 
    se for dif de (M, m / F, f ou O, o) não passa para a proxima pergunta.
    */  

      if (sex != 'M' && sex != 'm' && 
            sex != 'F' && sex != 'f' && 
            sex != 'O' && sex != 'o') {
    printf("========================================\n");            
    printf("        INVALIDO TENTE DE NOVO          \n");
    printf("========================================\n");
        }
    }  
while (sex != 'M' && sex != 'm' && 
            sex != 'F' && sex != 'f' && 
            sex != 'O' && sex != 'o');

    // continuação das perguntas
    printf("Qual sua altura?\n");
        scanf("%f", &altura);
    printf("Qual seu peso?\n");
        scanf("%f", &peso); 

    // Mostrando o resultado
        printf("=============================================\n");
        printf("       AS INFORMACOES GUARDADAS ABAIXO       \n");
        printf("=============================================\n");
        printf("IDADE: %5.1i Anos\n", idade);
            if (sex == 'M' || sex == 'm' ) {
                printf("SEXO:     Masculino\n");
            } 
                else if (sex == 'F' || sex == 'f') {
                    printf("SEXO:     Feminino\n");
                }
                    else {
                        printf("SEXO:     Outros\n");
                    }
        printf("ALTURA: %6.2f metros\n", altura);
        printf("PESO: %9.2f kg\n", peso); 
        printf("=============================================\n");

    return 0;
}