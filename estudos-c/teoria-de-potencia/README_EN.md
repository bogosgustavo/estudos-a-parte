# Algorithmic Proof: Identity of Squares

This C program validates the relationship between the square of a number (positive, negative, or decimal) and the square of its predecessor.

---

## Formula

$$n^2 = (n-1)^2 + n + (n-1)$$

Reduced to:

$$n^2 = (n-1)^2 + 2n - 1$$

---

## Configuration

At the top of the `provas-de-potencia.c` file, you can define the test range, which is currently set to:

```c
#define INICIO -0.25
#define FIM     12.5
#define PASSO    0.25