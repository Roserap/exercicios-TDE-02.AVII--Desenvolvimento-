#include <stdio.h>
#include <stdlib.h>


int main()
{
    char string[100];
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            contador++;
        }
    }

    printf("Número de espaços em branco na string: %d\n", contador);

    return 0;
}

