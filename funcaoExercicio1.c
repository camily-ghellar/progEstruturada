#include <stdio.h>
#include <stdlib.h>

int calcularDiasVida(int ano_atual,int ano_nasci,int dias_vida,int ano_normal){
    int i = ano_nasci;
    int cont_bissexto = 0;
        for(i; i<ano_atual; i++){
           if((i%4 == 0 && i%100!=0) || (i%4==0 && i%100==0 && i%400==0) ){
            cont_bissexto++;
           }
        }

        ano_normal = ano_atual - ano_nasci - cont_bissexto;

        dias_vida = ano_normal*365 + cont_bissexto*366;
        return dias_vida;
}


int main()
{
    char nome[15];
    int ano_atual;
    int ano_nasci;
    int dias_vida;
    int ano_futuro;
    int continuar = 1;
    int ano_normal;

    while(continuar == 1){
        printf("Digite o seu nome: ");
        scanf("%s", &nome);

        printf("Digite o seu ano de nascimento: ");
        scanf("%d", &ano_nasci);

        printf("Digite o ano atual: ");
        scanf("%d", &ano_atual);

        int resultado1 = calcularDiasVida(ano_atual,ano_nasci,dias_vida,ano_normal);
        printf("%s ja viveu %d dias.\n", nome, resultado1);


        printf("Digite um ano futuro: ");
        scanf("%d", &ano_futuro);

        int resultado2 = calcularDiasVida(ano_futuro,ano_atual,dias_vida,ano_normal);
        resultado2 = resultado1 + resultado2;

        printf("%s tera vivido %d dias ate o ano %d", nome, resultado2, ano_futuro);
        printf("\nDeseja continuar? 1-continua com outra pessoa, 0- encerra o programa.\n");
        scanf("%d", &continuar);
    }
    printf("Programa encerrado.");
}
