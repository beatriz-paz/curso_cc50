#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Solicitando altura
    int n;
    do
    {
        n = get_int("Escolha o valor da altura entre 1 e 8: ");
    }
    while (n < 1 || n > 8); // Condição de loop

    // Criando a pirâmide
    for (int i = 0; i < n; i++) //Linha
    {

        for (int j = 0; j < n; j++) //Coluna
        {
            if (i + j < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}

