#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero = 0;;
   int numeros[10];
   int maior;
   int menor;

   for(int i =0; i<10; i++){
     printf("Digite um numero: ");
     scanf("%d", &numero);
     numeros[i] = numero;
   }
   for(int i =0; i<10; i++){
    printf(" - %d", numeros[i]);
    maior = numeros[0];
    menor = numeros[0];

    if(numeros[i] > maior){
        maior = numeros[i];
    }
    else{
        menor = numeros[i];
    }

   }
   printf("\n");
   printf("Maior numero do vetor: %d\n", maior);
   printf("Menor numero do vetor: %d", menor);


}
