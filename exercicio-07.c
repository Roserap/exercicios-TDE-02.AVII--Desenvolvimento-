#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string[100];
    int i;

    printf("Digite uma string: ");
    if (fgets(string, sizeof(string), stdin) == NULL) {
        fprintf(stderr, "Erro ao ler a string.\n");
        return 1;
    }

    string[strcspn(string, "\n")] = 0;

    for (i = 0; string[i] != '\0'; i++)
    {
        string[i] = toupper(string[i]);
    }


    printf("String em maiúsculas: %s\n", string);

    return 0;
}

