#include <stdio.h>

int main() {
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    // solicitar entrada de dados primeiro
    printf("Digite o numero 1: \n");
    scanf("%d", &numero1);

    printf("Digite o numero 2: \n");
    scanf("%d", &numero2);

    // definir as operações DEPOIS de ler os valores
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;  // atenção: divisão inteira

    // realizar e imprimir as operações
    printf("A soma é: %d \n", soma);
    printf("A subtração é: %d \n", subtracao);
    printf("A multiplicação é: %d \n", multiplicacao);
    printf("A divisão é: %d \n", divisao);

    return 0;
}

