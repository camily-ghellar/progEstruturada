#include <stdio.h>
#include <stdlib.h>

int calcularPotencia(b, e){
    int resultado=1;
    for(int x=0; x<e; x++){
        resultado = resultado * b;
    }
    return resultado;
}

int main()
{
    int b;
    int e;
    printf("Digite um numero inteiro para a base: ");
    scanf("%d", &b);
    printf("\nDigite um numero inteiro para o expoente: ");
    scanf("%d", &e);

    int resultado = calcularPotencia(b, e);

    printf("Potencia de %d elevado a %d = %d.", b, e, resultado);
    return 0;
}

