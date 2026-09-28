#include <stdio.h>
#include <stdbool.h>

int main() {
    double valorPedido = 250.00;
    double pesoKg = 12.5;
    bool clientePrime = true;
    int distanciaKm = 80;

    bool freteGratis = (clientePrime == true) || (valorPedido > 300.00 && distanciaKm <= 100);
    bool seguroObrigatorio = (valorPedido > 200.00) && (pesoKg > 10.0 || distanciaKm > 150);

    printf("Frete Gratis: %d\n", freteGratis);
    printf("Seguro Obrigatorio: %d\n", seguroObrigatorio);

    return 0;
}