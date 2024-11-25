#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    printf("Você digitou: %s\n", str);

    printf("O comprimento da string é: %zu\n", strlen(str));

    return 0;
}
