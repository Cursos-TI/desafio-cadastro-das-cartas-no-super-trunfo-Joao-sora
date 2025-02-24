#include <stdio.h>

int main (){
  
    // primeiro número representa paises
    // 1 letra representa estado
    // 0 mais um "número" representa cidade

    
    int pontoturistico, pib, pontoturistico1, pib1, populacao, populacao1;
    float area, densidadep, capital, media, area1, densidadep1, capital1, media1; 
    char cidade[60], cidade1[60], estado[35], city[35], pais[35], pais1[35], city1[35], estado1[35];
   
        printf("---Carta 1---\n");

        printf("Informe o codigo do Pais (Um numero de 1 a 10):\n");
        scanf("%s", &pais);
        printf("Informe o codigo do estado (Uma letra de A a H):\n");
        scanf("%s", &estado);
        getchar();
        printf("Informe o codigo da cidade (Um numero de 01 a 04):\n");
        scanf("%s", &city);
        
        printf("Codigo da carta: %s%s%s\n", pais, estado, city);
        
        printf("Nome da Cidade:(sem espaço!!!)");
        scanf("%s", &cidade);

        printf("Populacao: ");
        scanf("%d", &populacao);

        printf("Area: ");
        scanf("%f", &area);

        printf("PIB: ");
        scanf("%d", &pib);

        printf("Pontos Turisticos: ");
        scanf("%d", &pontoturistico);

        densidadep = populacao/area;
        capital = pib/populacao;
    
        printf("Densidade populacional: %2.f", densidadep);
        printf("PIB per capita: %.2f", capital);
        
        (media = (float) pontoturistico + pib + area + populacao + densidadep + capital / 6);

        printf("\n---Dados gerais---\n");

            printf("\nNome da Cidade: %s\n", cidade);    
            printf("Area: %f Km²\n", area); // utlizar para comparação
            printf("PIB: %d Bilhões de reais\n", pib);  // utlizar para comparação
            printf("População: %d\n", populacao);  // utlizar para comparação
            printf("Ponto Turistico: %d na sua cidade\n", pontoturistico);  // utlizar para comparação
            printf("Densidade populacional: %.2f hab/Km²\n", densidadep);
            printf("PIB per capita: %.2f\n", capital);
            printf("Super Trunfo: %.1f (power card)\n", media); // media total

    printf("\n---Carta 2---\n"); 

        printf("Informe o codigo do Pais (Um numero de 1 a 10):\n");
        scanf("%s", &pais1);
        printf("Informe o codigo do estado (Uma letra de A a H):\n");
        scanf("%s", &estado1);
        getchar();
        printf("Informe o codigo da cidade (Um numero de 01 a 04):\n");
        scanf("%s", &city1);
        
        printf("Codigo da carta: %s%s%s\n", pais1, estado1, city1);

        printf("Nome da cidade:(sem espaço!!!)");
        scanf("%s", &cidade1);
     
        printf("Populacao: ");
        scanf("%d", &populacao1);

        printf("Area: ");
        scanf("%f", &area1);

        printf("PIB: ");
        scanf("%d", &pib1);

        printf("Pontos Turisticos: ");
        scanf("%d", &pontoturistico1);
        
        densidadep1 = populacao1/area1;
        capital1 = pib1/populacao1;
    
        printf("Densidade populacional: %.2f\n", densidadep1);
        printf("PIB per capita: %.2f\n", capital1);

        (media1 = (float) pontoturistico1 + pib1 + area1 + populacao1 + densidadep1 + capital1 / 6);

        printf("\n---Dados gerais---\n");

            printf("\nNome da Cidade: %s\n", cidade1);
            printf("Area: %f Km²\n", area1); // utlizar para comparação
            printf("PIB: %d Bilhões de reais\n", pib1);  // utlizar para comparação
            printf("População: %d\n", populacao1);  // utlizar para comparação
            printf("Ponto Turistico: %d na sua cidade\n", pontoturistico1);  // utlizar para comparação
            printf("Densidade populacional: %.2f hab/Km²\n", densidadep1);
            printf("PIB per capita: %.2f\n", capital1);
            printf("Super Trunfo: %.1f(power card)\n", media1); // media total


    if (area > area1){
        printf("\nCarta %s%s%s tem a area maior\n", pais, estado, city); 
}   else {
        printf("Carta %s%s%s tem a area maior\n", pais1, estado1, city1);
}
    if (pib > pib1){
        printf("Carta %s%s%s tem o maior PIB\n", pais, estado, city); 
}   else {
        printf("Carta %s%s%s tem  o maior PIB\n", pais1, estado1, city1);
}
    if (populacao > populacao1){
        printf("Carta %s%s%s tem a população maior\n", pais, estado, city); 
}   else {
        printf("Carta %s%s%s tem a populção maior\n", pais1, estado1, city1);
}
    if (pontoturistico > pontoturistico1){
        printf("Carta %s%s%s tem mais pontos turisticos\n", pais, estado, city); 
}   else {
        printf("Carta %s%s%s tem mais pontos turisticos\n", pais1, estado1, city1);        
}   
    if (densidadep < densidadep1) {
        printf("Carta %s%s%s tem a densidade menor\n", pais, estado, city);
}    else {
        printf("Carta %s%s%s tem a densidade menor\n", pais1, estado1, city1);
}
    if (capital > capital1) {
        printf("Carta %s%s%s tem o PIB per capita melhor\n", pais, estado, city);
}   else {
        printf("Carta %s%s%s tem o PIB per capital melhor\n", pais1, estado1, city1);
}
                printf("\nCarta com a maior area: %f Km²\n", area >= area1);
                printf("Carta com o maior PIB: %d Bilhôes de reais\n", pib >= pib1);
                printf("Carta com a maior populacão: %d\n", populacao >= populacao1);
                printf("Carta com o maior ponto turistico: %d\n", pontoturistico >= pontoturistico1);
                printf("Carta com a menor densidade populacional: %.2f hab/Km²\n", densidadep <= densidadep1);
                printf("Carta com o maior PIB per capita: %.2f\n", capital >= capital1);
                printf("Carta com o maoir Trunfo (power card): %.f\n", media >= media1);

    if (media > media1) {
        printf ("Carta %s%s%s ganhou\n", pais, estado, city);
}   else {
        printf("Carta %s%s%s ganhou\n", pais1, estado1, city1);
}

 return 0;   
}
