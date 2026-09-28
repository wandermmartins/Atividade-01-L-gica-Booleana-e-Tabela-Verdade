#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 10;
    int y = 20;
    int z = 10;
    bool ativo = true;

    printf("1. x == z: %d\n", x == z);
    printf("2. x != y: %d\n", x != y);
    printf("3. y < x: %d\n", y < x);
    printf("4. x >= z: %d\n", x >= z);
    printf("5. (x < y) e (ativo): %d\n", (x < y) && (ativo == true));
    printf("6. nao (x == z): %d\n", !(x == z));

    return 0;
}