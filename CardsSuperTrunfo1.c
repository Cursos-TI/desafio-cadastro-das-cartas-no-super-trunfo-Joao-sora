#include <stdio.h>

int main (){
    int pontoturistico;
    float area, pib, densidadep, capital;
    char cidade[60], pais[20], estado[60];
    unsigned long int populacao;

        printf("---Registre sua carta---\n");
    
        printf("Carta 1\n");
        
        printf("Pais: (um número de 1 a 10)\n");
        scanf("%s", &pais);

        printf("Estado: (uma letra de A a H)\n");
        scanf("%s", &estado);

        printf("Cidade: (um número de 1 a 4)\n");
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

        printf("---Dados Gerais da Carta---");

        printf("População: %lu\n", populacao);
        printf("area: %f Km*2\n", area);
        printf("PIB: %f bilhões de reais\n", pib);
        printf("Pontos Turisticos: %d\n", pontoturistico);

        printf(


    return 0;
}
