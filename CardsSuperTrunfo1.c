#include <stdio.h>

int main (){
    int pontoturistico;
    float area, pib, densidadep, capital;
    char cidade[60], pais[20], estado[60], city[35];
    unsigned long int populacao;

        printf("---Registre sua carta---\n");
    
        printf("Carta 1\n");
        
        printf("Pais: (um número de 1 a 10)\n");
        scanf("%s", &pais);

        printf("Estado: (uma letra de A a H)\n");
        scanf("%s", &estado);

        printf("Cidade: (um número de 1 a 4)\n");
        scanf("%s", &cidade);

        printf("Nome da cidade: %s\n", city);
        fgets("city, 35, stdin");
        city[strcspn(city, "\n")] = 0;

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

        printf("\n---Dados Gerais da Carta---\n");

        printf("Cidade: %s\n", city);

        printf("População: %.21lu\n", populacao);
        printf("area: %.2f Km*2\n", area);
        printf("PIB: %.15f bilhões de reais\n", pib);
        printf("Pontos Turisticos: %d\n", pontoturistico);
        printf("PIB per capita: %.2f per capita\n", capital);
        printf("Densidade populacional: %.2f por Km^2\n", densidadep);


    return 0;
}
