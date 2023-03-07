#include <stdio.h>
#include <locale.h>

int main() {

 setlocale(LC_ALL, "Portuguese");

    int x = 20;

    // 20 > 10
    if (x > 10) {
        printf("x é maior que 10\n");
    }

    // 20 < 0
    if (x < 0) {
        printf("x é negativo\n");
    } else {
        printf("x é positivo ou zero\n");
    }

    // 20 == 20
    if (x == 20) {
        printf("x é igual a 20\n");
    } else if (x == 30) {
        printf("x é igual a 30\n");
    } else {
        printf("x não a igual a 20 ou 30\n");
    }

    return 0;
}
