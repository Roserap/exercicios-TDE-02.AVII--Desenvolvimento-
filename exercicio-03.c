#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    printf("Os caracteres da string s�o:\n");
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}

