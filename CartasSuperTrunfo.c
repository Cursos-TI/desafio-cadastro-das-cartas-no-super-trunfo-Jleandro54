#include <stdio.h>

void carta1(){
    char estado1[20];
    char CodigoDaCarta1[20];
    char NomeDaCidade1[20];
    int populacao1= 0;
    float AreaEmKM1= 0;
    float pib1= 0;
    int NumeroDePontosTuristicos1=0;
    float DensidadePopulacional = 0;
    float PIBperCapita = 0;
    // aqui é onde a carta 01 sera cadastrada atravez do terminal 
    printf("**** SUPER TRUNFO ****\n");
printf("Digite qual o estado: \n");
scanf("%s", &estado1);

printf("Digite o Codigo da carta: \n");
scanf("%s", &CodigoDaCarta1);

printf("Digite o nome da Cidade: \n");
scanf("%s", &NomeDaCidade1);

printf("Digite qual a População da cidade: \n");
scanf("%d", &populacao1);

printf("Digite qual o valor da Area em KM2: \n");
scanf("%f", &AreaEmKM1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos \n");
scanf("%d", &NumeroDePontosTuristicos1);

// calculo da Densidade populaciona e o PIB per capita
     DensidadePopulacional = populacao1 / AreaEmKM1;
     PIBperCapita = (float) pib1 / populacao1;

     // Saida dos dados da carta 01 cadastrada no terminal
printf("**** SUPER TRUNFO ****\n");
     printf("\n");
printf("       CARTA-01   \n");
printf("\n");
printf("Estado: %s \n", estado1);
printf("Cidade: %s \n", NomeDaCidade1);
printf("População: %d \n", populacao1);
printf("Area: %.3f KM² \n", AreaEmKM1);
printf("PIB: R$ %.1f Bilhões de Reais\n", pib1);
printf("Numero de pontos turisticos: %d \n",NumeroDePontosTuristicos1);
printf("Dendade Populacional: %.3f hab/km² \n",DensidadePopulacional);
printf("PIB Per Capita: %.3f Reais\n", PIBperCapita);
printf("Codigo da Carta: %s \n", CodigoDaCarta1);
printf("\n");


}
void carta2(){
    char estado1[20];
    char CodigoDaCarta1[20];
    char NomeDaCidade1[20];
    int populacao1= 0;
    float AreaEmKM1= 0;
    float pib1= 0;
    int NumeroDePontosTuristicos1=0;
    float DensidadePopulacional = 0;
    float PIBperCapita = 0;
    // aqui é onde a carta 01 sera cadastrada atravez do terminal 
printf("**** SUPER TRUNFO ****\n");
    printf("Digite qual o estado: \n");
scanf("%s", &estado1);

printf("Digite o Codigo da carta: \n");
scanf("%s", &CodigoDaCarta1);

printf("Digite o nome da Cidade: \n");
scanf("%s", &NomeDaCidade1);

printf("Digite qual a População da cidade: \n");
scanf("%d", &populacao1);

printf("Digite qual o valor da Area em KM2: \n");
scanf("%f", &AreaEmKM1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos \n");
scanf("%d", &NumeroDePontosTuristicos1);

// calculo da Densidade populaciona e o PIB per capita
     DensidadePopulacional = populacao1 / AreaEmKM1;
     PIBperCapita = (float) pib1 / populacao1;
// Saida dos dados da carta 01 cadastrada no terminal
printf("**** SUPER TRUNFO ****\n");
printf("\n");
printf("       CARTA-02   \n");
printf("\n");
printf("Estado: %s \n", estado1);
printf("Cidade: %s \n", NomeDaCidade1);
printf("População: %df \n", populacao1);
printf("Area: %.3f KM² \n", AreaEmKM1);
printf("PIB: R$ %.1f Bilhões de Reais\n", pib1);
printf("Numero de pontos turisticos: %d \n",NumeroDePontosTuristicos1);
printf("Dendade Populacional: %.2f hab/km² \n",DensidadePopulacional);
printf("PIB Per Capita: %.3f Reais\n", PIBperCapita);
printf("Codigo da Carta: %s \n", CodigoDaCarta1);
printf("\n");
}

int main(){
     carta1();
     carta2();
return 0;
    }