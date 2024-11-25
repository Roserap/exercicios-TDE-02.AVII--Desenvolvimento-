#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char string[100];
    int i, contadordeLetra = 0, contadorDigital = 0, contadorEspecial = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; string[i] != '\0'; i++) {
        if (isalpha(string[i])) {
            contadordeLetra++;
        } else if (isdigit(string[i])) {
            contadorDigital++;
        } else if (string[i] != ' ' && string[i] != '\n') {
            contadorEspecial++;
        }
    }

    printf("Número de letras: %d\n", contadordeLetra);
    printf("Número de dígitos: %d\n", contadorDigital);
    printf("Número de caracteres especiais: %d\n", contadorEspecial);

    return 0;
}
