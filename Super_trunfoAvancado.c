#include<stdio.h>

int main(){
    char Estado, Codigo[4], NomeDaCidade [30], Estado2, Codigo2[4], NomeDaCidade2 [30]; 
    float area, area2, pib, pib2, densidadep1, densidadep2, pibPerCap1, pibPerCap2, superPoder1, superPoder2;
    int numpontostur, numpontostur2;
    float inversoDaDensidade1,inversoDaDensidade2;
    unsigned long int populacao, populacao2;

    printf("Digite o Estado; ");
    scanf(" %c", &Estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", Codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", NomeDaCidade);

    printf("Digite a População: ");
    scanf("%lu", &populacao);

    printf("Digite a Área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numpontostur);

     printf("Digite o Estado; ");
    scanf(" %c", &Estado2);

    printf("Digite o Código da Carta: ");
    scanf("%s", Codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", NomeDaCidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numpontostur2);

    densidadep1 = (float) populacao / area;
    densidadep2 = (float) populacao2 / area2;
    pibPerCap1 = (float) pib / populacao;
    pibPerCap2 = (float) pib2 / populacao2;
    inversoDaDensidade1 = (float) 1 / densidadep1;
    inversoDaDensidade2 = (float) 1 / densidadep2;
    superPoder1 = (float) populacao + area + pib + numpontostur + pibPerCap1 + inversoDaDensidade1;
    superPoder2 = (float) populacao2 + area2 + pib2 + numpontostur2 + pibPerCap2 + inversoDaDensidade2;

    printf("Comparação das Cartas\n");
    printf("População: Carta 1 Venceu %d\n", populacao > populacao2);
    printf("Área: Carta 1 Venceu %d\n", area > area2);
    printf("PIB: Carta 1 Venceu %d\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 Venceu %d\n", numpontostur > numpontostur2);
    printf("Densidade Populacional: Carta 1 Venceu %d \n", densidadep1 < densidadep2);
    printf("PIB per Cápita: Carta 1 Venceu %d\n", pibPerCap1 > pibPerCap2);
    printf("Super Poder: Carta 1 Venceu %d\n", superPoder1 > superPoder2);


 

    return 0;
}