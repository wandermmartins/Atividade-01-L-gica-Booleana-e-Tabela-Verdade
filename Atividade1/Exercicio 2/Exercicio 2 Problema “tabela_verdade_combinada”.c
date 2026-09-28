#include <stdio.h>
#include <stdbool.h>

int main() {
    bool valores[2] = {false, true};

    printf(" A | B | C | (A && B) || (!C)\n");
    printf("---+---+---+-----------------\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                bool a = valores[i];
                bool b = valores[j];
                bool c = valores[k];
                bool res = (a && b) || (!c);
                printf(" %d | %d | %d |        %d\n", a, b, c, res);
            }
        }
    }

    return 0;
}