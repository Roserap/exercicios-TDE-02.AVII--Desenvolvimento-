#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    if (strcmp(str1, str2) == 0) {
        printf("As strings s�o iguais.\n");
    } else {
        printf("As strings s�o diferentes.\n");
    }

    return 0;
}
