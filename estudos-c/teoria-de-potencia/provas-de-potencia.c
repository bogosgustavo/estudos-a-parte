#include <stdio.h>
#include <math.h>
#include <locale.h>

#define INICIO -0.25
#define FIM     12.5
#define PASSO    0.25

int main()
{
    setlocale(LC_ALL,"Portuguese");
    double valor;

    for (valor = INICIO; valor <= FIM + (PASSO / 2.0); valor += PASSO) {
        double potencia_correta = pow(valor, 2);
        double potencia_prova = pow(valor - 1, 2) + valor + (valor - 1);

        printf("••••••••••••\n\n");
        printf("Valor testado:    %.2lf\n", valor);
        printf("Potência correta: %.4lf\n", potencia_correta);
        printf("Potência prova:   %.4lf\n", potencia_prova);

        if (fabs(potencia_correta - potencia_prova) < 0.00001) {
            printf("Potência correta!\n\n"); 
        }
        else {
            printf("Potência incorreta...\n\n");
        }
    }

    return 0;
}