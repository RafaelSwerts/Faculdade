#include <stdio.h>
#include <string.h>

/* Dados das Cartas:
Estado - Tipo CHAR[20]
Codigo da Carta - CHAR[10]
Nome da Cidade - CHAR[30]
População - INT
Área em Km² - FLOAT
PIB - FLOAT
Número de POntos Turísticos - INT
*/

int main() 
{
// Variáveis da Carta 1 - Para a impressão única, poderia usar as mesmas variáveis porém a impressão seria após o primeiro Input.
    char    Carta1Estado[20];
    char    Carta1CodCarta[10];
    char    Carta1NomeCidade[30];
    int  Carta1Populacao;
    double  Carta1AreaKM2;
    double  Carta1Pib;
    int     Carta1NumPontosTuristicos;
    float   DensidadePopulacionalCarta1;
    float   PibPerCapitaCarta1;


// Variáveis da Carta 2
    char    Carta2Estado[20];
    char    Carta2CodCarta[10];
    char    Carta2NomeCidade[30];
    int     Carta2Populacao;
    double  Carta2AreaKM2;
    double  Carta2Pib;
    int     Carta2NumPontosTuristicos;
    float   DensidadePopulacionalCarta2;
    float   PibPerCapitaCarta2;

 



// Coleta dados da carta número 1
    printf("Dados da Carta 1 \n");
    
    printf("Carta 1 - Por favor insira o nome do Estado(nome por extenso): ");
    scanf(" %[^\n]", Carta1Estado);
    printf("Carta 1 - Por favor insira o Código da Carta (Ex: CID1, CID2, CID3, etc..): ");
    scanf(" %[^\n]", Carta1CodCarta);
    printf("Carta 1 - Por favor insira o Nome da Cidade: ");
    scanf(" %[^\n]", Carta1NomeCidade);
    printf("Carta 1 - Por favor insira a População: (Formato Ex: 1500000) ");
    scanf("%d", &Carta1Populacao);
    printf("Carta 1 - Por favor insira a Área em Km²: ");
    scanf("%lf", &Carta1AreaKM2);
    printf("Carta 1 - Por favor insira o PIB: ");
    scanf("%lf", &Carta1Pib);
    printf("Carta 1 - Por favor insira o Número de Pontos Turísticos: ");
    scanf("%d", &Carta1NumPontosTuristicos);

//Calcula Densidade Populacional e PIB per Capita da Carta 1
    DensidadePopulacionalCarta1 = Carta1Populacao / Carta1AreaKM2;
    PibPerCapitaCarta1 = Carta1Pib / Carta1Populacao;
    
    printf("\n\n"); // Pula duas linhas para melhorar a visualização no terminal


 // Coleta dados da carta número 2
    printf("Dados da Carta 2 \n");
    printf("Carta 2 - Por favor insira o nome do Estado(nome por extenso): ");
    scanf(" %[^\n]", Carta2Estado);
    printf("Carta 2 - Por favor insira o Código da Carta (Ex: CID1, CID2, CID3, etc..): ");
    scanf(" %[^\n]", Carta2CodCarta);
    printf("Carta 2 - Por favor insira o Nome da Cidade: ");
    scanf(" %[^\n]", Carta2NomeCidade);
    printf("Carta 2 - Por favor insira a População: (Formato Ex: 1500000) ");
    scanf("%d", &Carta2Populacao);
    printf("Carta 2 - Por favor insira a Área em Km²: ");
    scanf("%lf", &Carta2AreaKM2);
    printf("Carta 2 - Por favor insira o PIB: ");
    scanf("%lf", &Carta2Pib);
    printf("Carta 2 - Por favor insira o Número de Pontos Turísticos: ");
    scanf("%d", &Carta2NumPontosTuristicos);
//Calcula Densidade Populacional e PIB per Capita da Carta 2
    DensidadePopulacionalCarta2 = Carta2Populacao / Carta2AreaKM2;
    PibPerCapitaCarta2 = Carta2Pib / Carta2Populacao;

    printf("\n\n"); // Pula duas linhas para melhorar a visualização no terminal


    // Impressão dos dados coletados das cartas
    printf("Dados da Carta 1 \n");
    printf("Estado: %s\n", Carta1Estado);
    printf("Código da Carta: %s\n", Carta1CodCarta);
    printf("Nome da Cidade: %s\n", Carta1NomeCidade);
    printf("População: %d\n", Carta1Populacao);
    printf("Área : %.2f Km²  \n", Carta1AreaKM2);
    printf("PIB - R$: %.2f Bilhoes \n ", Carta1Pib);
    printf("Número de Pontos Turísticos: %d\n", Carta1NumPontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", DensidadePopulacionalCarta1);
    printf("PIB Per Capita: %.2f \n", PibPerCapitaCarta1);

    printf("\n\n"); // Pula duas linhas para melhorar a visualização no terminal

    printf("Dados da Carta 2 \n");
    printf("Estado: %s\n", Carta2Estado);
    printf("Código da Carta: %s\n", Carta2CodCarta);
    printf("Nome da Cidade: %s\n", Carta2NomeCidade);
    printf("População: %d\n", Carta2Populacao);
    printf("Área: : %.2f Km² \n", Carta2AreaKM2);
    printf("PIB - R$: %.2f Bilhoes \n", Carta2Pib);
    printf("Número de Pontos Turísticos: %d\n", Carta2NumPontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", DensidadePopulacionalCarta2);
    printf("PIB Per Capita: %.2f \n", PibPerCapitaCarta2);
    

return 0;

}

