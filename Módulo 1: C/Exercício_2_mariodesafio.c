#include <stdio.h>
#include <cs50.h>

void arvore(int altura);

int main(void)
{
    int altura = 0;
    do
    {
        altura = get_int("Altura: ");
    }
    while(altura < 1 || altura > 10);
    arvore(altura);
    return 0;
}

void arvore(int altura)
{
    for(int a = altura; a > 0; a--)
    {
        for(int b = 1; b <= altura; b++)
        {
            if (a > b)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf(" ");
        for(int c = altura; c > 0; c--)
        {
            if(a < c || a == c)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}