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

float div(float a, float b){
	if (b != 0){
		return a/b;
	} else {
		printf("Erro: impossível dividir!"\n);
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
				R = div(N1, N2);
				printf("Resultado: %.2f\n", R);
				break;


