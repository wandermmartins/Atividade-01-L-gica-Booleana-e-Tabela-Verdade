#include <stdio.h>
#include <stdbool.h>

int main() {
    double rendaMensal;
    int temRestricao;
    bool aprovado;

    printf("Digite a renda mensal: ");
    scanf("%lf", &rendaMensal);

    printf("Possui restricao no Serasa (1-Sim / 0-Nao)? ");
    scanf("%d", &temRestricao);

    aprovado = (rendaMensal >= 3000.00) && (temRestricao == 0);

    printf("\nEMPRESTIMO APROVADO: %d\n", aprovado);

    return 0;
}