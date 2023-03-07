#include <stdio.h>
#include <locale.h>

int main() {

 setlocale(LC_ALL, "Portuguese");

    int i;

    // Inicia do 1 até o 10 (Crescente)
    printf("Primeiro Exemplo: ");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Segundo Exemplo: ");
    // Inicia do 10 até 0 (Decrescente)
    for (i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}