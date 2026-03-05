#include <stdio.h>

int main()
{
    char Estado, Codigo[4], NomeDaCidade[30], Estado2, Codigo2[4], NomeDaCidade2[30];
    int populacao, populacao2;
    float area, area2, pib, pib2, densidadep1, densidadep2, pibPerCap1, pibPerCap2;
    int numpontostur, numpontostur2;

    printf("Digite o Estado; ");
    scanf("%c", &Estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", Codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", NomeDaCidade);

    printf("Digite a População: ");
    scanf("%d", &populacao);

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
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &numpontostur2);

    densidadep1 = (float)populacao / area;
    densidadep2 = (float)populacao2 / area2;
    pibPerCap1 = (float)pib / populacao;
    pibPerCap2 = (float)pib2 / populacao2;

    printf("A Densidade Populacional da Carta 1 é: %.2f\n", densidadep1);
    printf("A Densidade Populacional da Carta 2 é: %.2f\n", densidadep2);
    printf("Pib per Capita da Carta 1 é: %.2f\n", pibPerCap1);
    printf("Pib per Capita da Carta 2 é: %.2f\n", pibPerCap2);
    printf("\n\n");

    printf("Comparação de População entre as Cartas 1 e 2!\n\n");
    printf("População de: %s é %d\n", NomeDaCidade, populacao);
    printf("População de: %s é %d\n", NomeDaCidade2, populacao2);

    if (populacao > populacao2)
    {
        printf("Carta 1 Venceu!\n");
    }

    else if (populacao == populacao2)
    {
        printf("Carta 1 e 2 Empataram!\n");
    }

    else
    {
        printf("Carta 2 Venceu!\n");
    }

    return 0;
}