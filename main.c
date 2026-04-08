#include <stdio.h>
#include <stdlib.h>
int main () {
    int opcao;
    float saldo, valor;

    printf("Digite o saldo inicial : ");
    scanf("%f", &saldo);
    while ( saldo < 0 ) {
        printf("Saldo Invalido. Digite um valor maior ou igual a 0. \n ");
        scanf("%f", &saldo);

    }

    opcao = 0;

    while (opcao != 4 ) {
        printf("--- MENU ---\n");
        printf("1. Consultar saldo \n");
        printf("2. Sacar\n");
        printf("3. depositar\n");
        printf("4. Sair\n");
        printf("Escolha a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Seu saldo e de %.2f\n", saldo);
                break;

            case 2:
                printf ("Digite o valor do saque");
                scanf("%f", &valor);
                if (valor <= 0) {
                    printf("Valor de saque invalido.\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente.\n");
                }
                else {
                    saldo -= valor;
                    printf("Saque realizado. Saldo atual: %.2f\n", saldo);
                }
                break;
            case 3:
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);

                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado. \n");
                } else {
                    printf("Valor de deposito invalido. \n");
                }
                break;
            case 4:
                printf("Operacao encerrada\n");
                break;
            default:
                printf("Opcao invalida\n");



        }

    }
    return 0;
}

