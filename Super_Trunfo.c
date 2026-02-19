#include<stdio.h>

int main(){
    char Estado, Codigo[4], NomeDaCidade [30], Estado2, Codigo2[4], NomeDaCidade2 [30]; 
    int populacao, populacao2;
    float area, area2;
    float pib,pib2;
    int numpontostur, numpontostur2;

    printf("Digite o Estado; ");
    scanf(" %c", &Estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", &Codigo);

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
    scanf("%s", &Codigo2);

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

    printf("Carta1: \n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", NomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numpontostur);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");


    printf("Carta2: \n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numpontostur2);

    return 0;


}
