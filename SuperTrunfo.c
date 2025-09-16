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
    char        Carta1Estado[20];
    char        Carta1CodCarta[10];
    char        Carta1NomeCidade[30];
    long int    Carta1Populacao;
    double      Carta1AreaKM2;
    double      Carta1Pib;
    int         Carta1NumPontosTuristicos;
    float       DensidadePopulacionalCarta1;
    double       PibPerCapitaCarta1;
    float       SuperPoderCarta1;


// Variáveis da Carta 2
    char        Carta2Estado[20];
    char        Carta2CodCarta[10];
    char        Carta2NomeCidade[30];
    long int    Carta2Populacao;
    double      Carta2AreaKM2;
    double      Carta2Pib;
    int         Carta2NumPontosTuristicos;
    float       DensidadePopulacionalCarta2;
    double       PibPerCapitaCarta2;
    float       SuperPoderCarta2;
 



// Coleta dados da carta número 1
    printf("Dados da Carta 1 \n");
    
    printf("Carta 1 - Por favor insira o nome do Estado(nome por extenso): ");
    scanf(" %[^\n]", Carta1Estado);
    printf("Carta 1 - Por favor insira o Código da Carta (Ex: CID1, CID2, CID3, etc..): ");
    scanf(" %[^\n]", Carta1CodCarta);
    printf("Carta 1 - Por favor insira o Nome da Cidade: ");
    scanf(" %[^\n]", Carta1NomeCidade);
    printf("Carta 1 - Por favor insira a População: (Formato Ex: 1500000) ");
    scanf("%ld", &Carta1Populacao);
    printf("Carta 1 - Por favor insira a Área em Km²: ");
    scanf("%lf", &Carta1AreaKM2);
    printf("Carta 1 - Por favor insira o PIB: ");
    scanf("%lf", &Carta1Pib);
    printf("Carta 1 - Por favor insira o Número de Pontos Turísticos: ");
    scanf("%d", &Carta1NumPontosTuristicos);

//Calcula Densidade Populacional e PIB per Capita da Carta 1
    DensidadePopulacionalCarta1 = Carta1Populacao / Carta1AreaKM2;
    PibPerCapitaCarta1 = Carta1Pib / Carta1Populacao;

/*Calcula SuperPoder da Carta 1 - 
    somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
*/

    SuperPoderCarta1 = Carta1Populacao + Carta1AreaKM2 + Carta1Pib + Carta1NumPontosTuristicos + PibPerCapitaCarta1 + (1 / DensidadePopulacionalCarta1);


// Pula duas linhas para melhorar a visualização no terminal
    printf("\n\n"); 


 // Coleta dados da carta número 2
    printf("Dados da Carta 2 \n");
    printf("Carta 2 - Por favor insira o nome do Estado(nome por extenso): ");
    scanf(" %[^\n]", Carta2Estado);
    printf("Carta 2 - Por favor insira o Código da Carta (Ex: CID1, CID2, CID3, etc..): ");
    scanf(" %[^\n]", Carta2CodCarta);
    printf("Carta 2 - Por favor insira o Nome da Cidade: ");
    scanf(" %[^\n]", Carta2NomeCidade);
    printf("Carta 2 - Por favor insira a População: (Formato Ex: 1500000) ");
    scanf("%ld", &Carta2Populacao);
    printf("Carta 2 - Por favor insira a Área em Km²: ");
    scanf("%lf", &Carta2AreaKM2);
    printf("Carta 2 - Por favor insira o PIB: ");
    scanf("%lf", &Carta2Pib);
    printf("Carta 2 - Por favor insira o Número de Pontos Turísticos: ");
    scanf("%d", &Carta2NumPontosTuristicos);

//Calcula Densidade Populacional e PIB per Capita da Carta 2
    DensidadePopulacionalCarta2 = Carta2Populacao / Carta2AreaKM2;
    PibPerCapitaCarta2 = Carta2Pib / Carta2Populacao;


/*Calcula SuperPoder da Carta 2 - 
    somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
*/

    SuperPoderCarta2 = Carta2Populacao + Carta2AreaKM2 + Carta2Pib + Carta2NumPontosTuristicos + PibPerCapitaCarta2 + (1 / DensidadePopulacionalCarta2);



// Pula duas linhas para melhorar a visualização no terminal

    printf("\n\n"); 


// Impressão dos dados coletados da carta 1
    printf("Dados da Carta 1 \n");
    printf("Estado: %s\n", Carta1Estado);
    printf("Código da Carta: %s\n", Carta1CodCarta);
    printf("Nome da Cidade: %s\n", Carta1NomeCidade);
    printf("População: %ld\n", Carta1Populacao);
    printf("Área : %.2f Km²  \n", Carta1AreaKM2);
    printf("PIB - R$: %.2f Bilhoes \n ", Carta1Pib);
    printf("Número de Pontos Turísticos: %d\n", Carta1NumPontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", DensidadePopulacionalCarta1);
    printf("PIB Per Capita: %.2f \n", PibPerCapitaCarta1);
    printf("O Super Poder da Carta 1 é: %.2f\n", SuperPoderCarta1);


// Pula duas linhas para melhorar a visualização no terminal

    printf("\n\n"); 


// Impressão dos dados coletados da carta 2

    printf("Dados da Carta 2 \n");
    printf("Estado: %s\n", Carta2Estado);
    printf("Código da Carta: %s\n", Carta2CodCarta);
    printf("Nome da Cidade: %s\n", Carta2NomeCidade);
    printf("População: %ld\n", Carta2Populacao);
    printf("Área: : %.2f Km² \n", Carta2AreaKM2);
    printf("PIB - R$: %.2f Bilhoes \n", Carta2Pib);
    printf("Número de Pontos Turísticos: %d\n", Carta2NumPontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", DensidadePopulacionalCarta2);
    printf("PIB Per Capita: %.2f \n", PibPerCapitaCarta2);
    printf("O Super Poder da Carta 2 é: %.2f\n", SuperPoderCarta2);
    

// Pula duas linhas para melhorar a visualização no terminal

    printf("\n"); 

// Comparação entre as cartas e dizer qual atributo é maior em cada um dos atributos.
// Foi utilizado o operador ternário para fazer a comparação e imprimir o resultado em uma única linha de código, descrevendo o vencedor de maneira mais clara ao usuário.


//Valida População
printf("Comparação da População das Cartas\n");
printf("Dados População, %s : %ld, %s :  %ld\n", Carta1NomeCidade,Carta1Populacao,Carta2NomeCidade, Carta2Populacao);
printf("A Maior população foi:  %ld da Cidade de: %s\n", (Carta1Populacao > Carta2Populacao) ? Carta1Populacao : Carta2Populacao, (Carta1Populacao > Carta2Populacao) ? Carta1NomeCidade : Carta2NomeCidade);

printf("\n");

//Valida Área
printf("Comparação da Área das Cartas\n");
printf("As Áreas são:, %s : %.2f KM², %s :  %.2f KM²\n", Carta1NomeCidade,Carta1AreaKM2,Carta2NomeCidade, Carta2AreaKM2);
printf("A Maior Área é :  %.2f da Cidade de: %s\n", (Carta1AreaKM2 > Carta2AreaKM2) ? Carta1AreaKM2 : Carta2AreaKM2, (Carta1AreaKM2 > Carta2AreaKM2) ? Carta1NomeCidade : Carta2NomeCidade);

printf("\n");

//Valida PIB
printf("Comparação do PIB das Cartas\n");
printf("Os PIBs são:, %s : R$ %.2f Bilhões, %s :  R$ %.2f Bilhões\n", Carta1NomeCidade,Carta1Pib,Carta2NomeCidade, Carta2Pib);
printf("O Maior PIB é :  R$ %.2f Bilhões da Cidade de: %s\n", (Carta1Pib > Carta2Pib) ? Carta1Pib : Carta2Pib, (Carta1Pib > Carta2Pib) ? Carta1NomeCidade : Carta2NomeCidade);


printf("\n");
//Valida Pontos Turísticos
printf("Comparação do Número de Pontos Turísticos das Cartas\n");
printf("Os Pontos Turísticos são:, %s : %d, %s :  %d\n", Carta1NomeCidade,Carta1NumPontosTuristicos,Carta2NomeCidade, Carta2NumPontosTuristicos);
printf("O Maior Número de Pontos Turísticos é :  %d da Cidade de: %s\n", (Carta1NumPontosTuristicos > Carta2NumPontosTuristicos) ? Carta1NumPontosTuristicos : Carta2NumPontosTuristicos, (Carta1NumPontosTuristicos > Carta2NumPontosTuristicos) ? Carta1NomeCidade : Carta2NomeCidade);


printf("\n");
//Valida Densidade Populacional
printf("Comparação da Densidade Populacional das Cartas\n");
printf("As Densidades Populacionais são:, %s : %.2f hab/Km², %s :  %.2f hab/Km²\n", Carta1NomeCidade,DensidadePopulacionalCarta1,Carta2NomeCidade, DensidadePopulacionalCarta2);
printf("A Menor Densidade Populacional é :  %.2f hab/Km² da Cidade de: %s\n", (DensidadePopulacionalCarta1 < DensidadePopulacionalCarta2) ? DensidadePopulacionalCarta1 : DensidadePopulacionalCarta2, (DensidadePopulacionalCarta1 < DensidadePopulacionalCarta2) ? Carta1NomeCidade : Carta2NomeCidade);


printf("\n");
//Valida PIB per Capita
printf("Comparação do PIB per Capita das Cartas\n");
printf("Os PIBs per Capita são:, %s : R$ %.2f , %s :  R$ %.2f \n", Carta1NomeCidade,PibPerCapitaCarta1,Carta2NomeCidade, PibPerCapitaCarta2);
printf("O Maior PIB per Capita é :  R$ %.2f da Cidade de: %s\n", (PibPerCapitaCarta1 > PibPerCapitaCarta2) ? PibPerCapitaCarta1 : PibPerCapitaCarta2, (PibPerCapitaCarta1 > PibPerCapitaCarta2) ? Carta1NomeCidade : Carta2NomeCidade); 



printf("\n");
//Valida Super Poder
printf("Comparação do Super Poder das Cartas\n");
printf("Os Super Poderes são:, %s : %.2f , %s :  %.2f \n", Carta1NomeCidade,SuperPoderCarta1,Carta2NomeCidade, SuperPoderCarta2);
printf("O Maior Super Poder é :  %.2f da Cidade de: %s\n", (SuperPoderCarta1 > SuperPoderCarta2) ? SuperPoderCarta1 : SuperPoderCarta2, (SuperPoderCarta1 > SuperPoderCarta2) ? Carta1NomeCidade : Carta2NomeCidade);   





return 0;

}
