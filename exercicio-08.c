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

        char ch = string[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            contador++;
        }
    }

    printf("Número de vogais na string: %d\n", contador);

    return 0;
}
