#include <stdio.h>

int main() {
    int i = 1;

    // Inicia do 1 at� o 10 (Crescente)
    printf("Primeiro Exemplo: ");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Inicia do 10 at� 0 (Decrescente)
        printf("Segundo Exemplo: \n");
    i = 10;
    while (i >= 1) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    return 0;
}
