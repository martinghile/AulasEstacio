#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char nomeDoPais1[50] = "Brasil", nomeDoPais2[50] = "EUA";
    int populacao1, numPontosTur1, populacao2, numPontosTur2, escolhaJogador;
    float area1, PIB1, densidade1, area2, PIB2, densidade2;

    populacao1 = 203000000;
    populacao2 = 335000000;
    numPontosTur1 = 50;
    numPontosTur2 = 60;
    area1 = 8500000;
    area2 = 9800000;
    PIB1 = 2.1;
    PIB2 = 27;

    densidade1 =(float) populacao1 / area1;
    densidade2 =(float) populacao2 / area2;

    printf("***Escolha uma atributo***\n");
    printf("1. População\n");
    printf("2. Número de Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &escolhaJogador);

    switch (escolhaJogador)
    {
    case 1:
        printf("%s X %s\n", nomeDoPais1, nomeDoPais2);
        printf("População: %s: %d X %s: %d \n", nomeDoPais1, populacao1, nomeDoPais2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("*** Você Venceu!!! ***\n");
        }
        else if (populacao1 == populacao2)
        {
            printf("*** Você Empatou!!! ***\n");
        }
        else
        {
            printf("*** Você Perdeu!!! ***\n");
        }
        break;

    case 2:
        printf("%s X %s\n", nomeDoPais1, nomeDoPais2);
        printf("Número de Pontos Turísticos: %s: %d X %s: %d \n", nomeDoPais1, numPontosTur1, nomeDoPais2, numPontosTur2);
        if (numPontosTur1 > numPontosTur2)
        {
            printf("*** Você Venceu!!! ***\n");
        }
        else if (numPontosTur1 == numPontosTur2)
        {
            printf("*** Você Empatou!!! ***\n");
        }
        else
        {
            printf("*** Você Perdeu!!! ***\n");
        }
        break;

    case 3:
        printf("%s X %s\n", nomeDoPais1, nomeDoPais2);
        printf("Área: %s: %.2f X %s: %.2f \n", nomeDoPais1, area1, nomeDoPais2, area2);
        if (area1 > area2)
        {
            printf("*** Você Venceu!!! ***\n");
        }
        else if (area1 == area2)
        {
            printf("*** Você Empatou!!! ***\n");
        }
        else
        {
            printf("*** Você Perdeu!!! ***\n");
        }
        break;

    case 4:
        printf("%s X %s\n", nomeDoPais1, nomeDoPais2);
        printf("PIB: %s: %.2f X %s: %.2f \n", nomeDoPais1, PIB1, nomeDoPais2, PIB2);
        if (PIB1 > PIB2)
        {
            printf("*** Você Venceu!!! ***\n");
        }
        else if (PIB1 == PIB2)
        {
            printf("*** Você Empatou!!! ***\n");
        }
        else
        {
            printf("*** Você Perdeu!!! ***\n");
        }
        break;

    case 5:
        printf("%s X %s\n", nomeDoPais1, nomeDoPais2);
        printf("Densidade: %s: %.2f X %s: %.2f \n", nomeDoPais1, densidade1, nomeDoPais2, densidade2);
        if (densidade1 < densidade2)
        {
            printf("*** Você Venceu!!! ***\n");
        }
        else if (densidade1 == densidade2)
        {
            printf("*** Você Empatou!!! ***\n");
        }
        else
        {
            printf("*** Você Perdeu!!! ***\n");
        }
        break;

    default:
        printf("Opção Inválida!!!");
        break;
    }

return 0;

}