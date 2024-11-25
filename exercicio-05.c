#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char original[100];
    char copia[100];

    // Lê a string do usuário
    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin);

    original[strcspn(original, "\n")] = 0;

    strcpy(copia, original);

    printf("String original: %s\n", original);
    printf("Cópia da string: %s\n", copia);

    return 0;
}

