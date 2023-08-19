#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    int total = 0;
    int maximo = 0;
    float media = 0;
    int cont = 0;

    printf("Informe o limite do valor da soma dos numeros: ");
    scanf("%d", &maximo);

    while(total <= maximo){
        printf("Digite um numero: ");
        scanf("%d", &numero);
        total = total + numero ;
        cont++;
    }

    media = (float)total / cont;
    printf("A soma de todos os numero digitados e %d\n", total);
    printf("A media dos numeros digitados e %.2f", media);
}
