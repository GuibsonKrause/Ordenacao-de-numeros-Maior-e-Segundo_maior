#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int maior, segundo, i, valor;
    printf("Digite o 1-esimo valor\n");
    scanf("%d", &maior);
    printf("Digite o 2-esimo valor\n");
    scanf("%d", &valor);

    if(valor > maior)
    {
        segundo = maior;
        maior = valor;
    }
    else
    {
        segundo = valor;
    }
    for( i= 3; i <= 6; i++)
    {
        printf("Digite o %d-esimo valor\n", i);
        scanf("%d", &valor);
        if (valor > maior)
        {
            segundo = maior;
            maior = valor;
        }
        else if (valor > segundo)
            {
                segundo = valor;
            }

    }
    printf("O maior e %d e o segundo e %d\n", maior, segundo);
return 0;
}
