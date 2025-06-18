#include <stdio.h>
#include <stdlib.h>

float soma(float a, float b){
	return a + b;
}

float sub(float a, float b){
	return a - b;
}

float multi(float a, float b){
	return a*b;
}

float divisao(float a, float b){
	if (b != 0){
		return a/b;
	} else {
		printf("Erro: impossível dividir!\n");
		return 0;
	}
}

int main(){
	float N1, N2, R;
	char operacao;
	char continuar = 's';

	while (continuar != 'q'){
		printf("\nDigite o primeiro número: ");
		scanf("%f", &N1);

		printf("\nDigite o segundo número: ");
		scanf("%f", &N2);

		printf("Escolha a operação (+, -, *, /):");
		scanf(" %c", &operacao);

		switch(operacao){
			case '+':
				R = soma(N1, N2);
				printf("Resultado: %.2f\n", R);
				break;
			case '-':
				R = sub(N1, N2);
				printf("Resultado: %2.f\n", R);
				break;
			case '*':
				R = multi(N1, N2);
				printf("Resultado: %.2f\n", R);
				break;
			case '/':
				if (N2 != 0){
				R = divisao(N1, N2);
				printf("Resultado: %.2f\n", R);
				} else {
					printf("Erro: impossível dividir por 0");
				}
				break;
			default:
				printf("Operação inválida!\n");
		}
		printf("Deseja fazer outro cálculo (s para sim, q para sair)? ");
		scanf(" %c", &continuar);
	}

	printf("Programa encerrado.\n");
	return 0;
}


