# Prova Algorítmica: Identidade dos Quadrados

Este programa em C valida a relação entre o quadrado de um número (positivo, negativo ou decimal) e o quadrado do seu antecessor.

---

## Fórmula

$$n^2 = (n-1)^2 + n + (n-1)$$

Reduzida para:

$$n^2 = (n-1)^2 + 2n - 1$$

---

## Configuração

No topo do arquivo `provas-de-potencia.c`, você pode definir o intervalo dos testes, os quais estão previamente definidos:

```c
#define INICIO -0.25
#define FIM     12.5
#define PASSO    0.25