#include <stdio.h>

int main (){
    int pontoturistico;
    float area, pib, densidadep, capital;
    char cidade[60], pais[20], estado[60];
    unsigned long int populacao;

        printf("Carta 1A01\n");
        
        printf("Pais: \n");
        scanf("%s", &pais);

        printf("Estado: \n");
        scanf("%s", &estado);

        printf("Cidade: \n");
        scanf("%s", &cidade);

        printf("Populacao: \n");
        scanf("%lu", &populacao);

        printf("Area: \n");
        scanf("%f", &area);

        printf("PIB: \n");
        scanf("%f", &pib);

        printf("Pontos Turisticos: \n");
        scanf("%d", &pontoturistico);

            densidadep = populacao/area;
        printf("Densidade populacional: %.2f\n", densidadep);

            capital = pib/populacao;
        printf("PIB per capita: %.2f\n", capital);

        printf("População: %lu\n", populacao);
        printf("area: %f\n", area);
        printf("PIB: %f\n", pib);
        printf("Pontos Turisticos: %d\n", pontoturistico);


    return 0;
}