// main.c
#include <stdio.h>
#include "funcoes.h"

int main() {
    float num1, num2;
    char operador;
    char continuar = 's';

    while (continuar != 'q') {
        printf("\nDigite a operacao (ex: 5 * 2): ");
        scanf("%f %c %f", &num1, &operador, &num2);

        switch (operador) {
            case '+':
                printf("Resultado: %.2f\n", somar(num1, num2));
                break;
            case '-':
                printf("Resultado: %.2f\n", subtrair(num1, num2));
                break;
            case '*':
                printf("Resultado: %.2f\n", multiplicar(num1, num2));
                break;
            case '/':
                if (num2 != 0)
                    printf("Resultado: %.2f\n", dividir(num1, num2));
                else
                    printf("Erro: Impossível dividir por zero!\n");
                break;
            default:
                printf("Operador inválido!\n");
        }

        printf("Deseja fazer outro calculo? (s para sim, q para sair): ");
        scanf(" %c", &continuar);
    }

    return 0;
}
