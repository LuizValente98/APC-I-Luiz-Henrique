#include <stdio.h>

int main () {
    /*tipos de entrada*/

        char uma_tecla;

    printf("Presione uma tecla:");
    scanf("%c", &uma_tecla);
            while(getchar() != '\n'); // limpar buffer
    printf("a tecla que voce precionou é: %c\n", uma_tecla);

        int  idade;

    printf("informe a sua idade:");
    scanf("%i", &idade);
            while(getchar() != '\n');
    printf("voce tem %i anos\n", idade);

        float preco;

    printf("Informe o preco da passagem:");
    scanf("%f", &preco);
            while(getchar() != '\n');

    printf("o preco da passagem eh R$ %.2f \n", preco);

    return 0;

}

