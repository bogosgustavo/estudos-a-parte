#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 20

int main()
{
    int potencia_correta[N];
    int potencia_prova[N];
    int i = 0;

    for (i = 0; i < N; i++) {
        potencia_correta[i] = pow(i, 2);
        potencia_prova[i] = pow(i - 1, 2) + i + (i - 1);
    }

    for (i = 0; i < N; i++) {
        printf("\n••••••••••••\n");
        printf("Potencia correta: %d\n", potencia_correta[i]);
        printf("Potencia prova: %d\n", potencia_prova[i]);

        if (potencia_correta[i] == potencia_prova[i]) {
            printf("Potencia correta!\n");
        }
        else {
            printf("Potencia incorreta...\n");
        }
    }

    return 0;
}