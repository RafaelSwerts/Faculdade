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
 
// Variável para a opção do menu
    int opcao;


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


// Menu Interativo


    printf("Menu de Opções:\n");
    printf("1 - Comparar Atriburos\n");
    printf("2 - Sair \n");
    printf("Digite a Opção desejada e pressione Enter: ");
    scanf("%d", &opcao);
    printf("\n");
switch(opcao) {
        case 1: 
            int atributo;
            printf("Selecione o Atributo a ser comparado\n");
            printf("1 - População\n"); 
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");

            scanf("%d", &atributo);
        
                switch(atributo) {
                    case 1:    
                if (Carta1Populacao > Carta2Populacao) {
                    printf("A Maior população foi:  %ld da Cidade de: %s\n", Carta1Populacao, Carta1NomeCidade);
                } else if (Carta2Populacao > Carta1Populacao) {
                    printf("A Maior população foi:  %ld da Cidade de: %s\n", Carta2Populacao, Carta2NomeCidade);
                } else {
                    printf("As populações são iguais:  %ld habitantes em ambas as cidades.\n", Carta1Populacao);
                }
                        break;
                    case 2:
                if (Carta1AreaKM2 > Carta2AreaKM2) {
                    printf("A Maior Área é :  %.2f da Cidade de: %s\n", Carta1AreaKM2, Carta1NomeCidade);
                } else if (Carta2AreaKM2 > Carta1AreaKM2) {
                    printf("A Maior Área é :  %.2f da Cidade de: %s\n", Carta2AreaKM2, Carta2NomeCidade);
                } else {
                    printf("As Áreas são iguais:  %.2f Km² em ambas as cidades.\n", Carta1AreaKM2);
                }
                        break;
                    case 3:
                if (Carta1Pib > Carta2Pib) {
                    printf("O Maior PIB é :  R$ %.2f Bilhões da Cidade de: %s\n", Carta1Pib, Carta1NomeCidade);
                } else if (Carta2Pib > Carta1Pib) {
                    printf("O Maior PIB é :  R$ %.2f Bilhões da Cidade de: %s\n", Carta2Pib, Carta2NomeCidade);
                } else {
                    printf("Os PIBs são iguais:  R$ %.2f Bilhões em ambas as cidades.\n", Carta1Pib);
                }
                        break;
                    case 4:
                if (Carta1NumPontosTuristicos > Carta2NumPontosTuristicos) {
                    printf("O Maior Número de Pontos Turísticos é :  %d da Cidade de: %s\n", Carta1NumPontosTuristicos, Carta1NomeCidade);
                } else if (Carta2NumPontosTuristicos > Carta1NumPontosTuristicos) {
                    printf("O Maior Número de Pontos Turísticos é :  %d da Cidade de: %s\n", Carta2NumPontosTuristicos, Carta2NomeCidade);
                } else {
                    printf("O Número de Pontos Turísticos são iguais:  %d em ambas as cidades.\n", Carta1NumPontosTuristicos);
                }
                        break;
                    case 5:
                if (DensidadePopulacionalCarta1 < DensidadePopulacionalCarta2) {
                    printf("A Menor Densidade Populacional é :  %.2f hab/Km² da Cidade de: %s\n", DensidadePopulacionalCarta1, Carta1NomeCidade);
                } else if (DensidadePopulacionalCarta2 < DensidadePopulacionalCarta1) {
                    printf("A Menor Densidade Populacional é :  %.2f hab/Km² da Cidade de: %s\n", DensidadePopulacionalCarta2, Carta2NomeCidade);
                } else {
                    printf("As Densidades Populacionais são iguais:  %.2f hab/Km² em ambas as cidades.\n", DensidadePopulacionalCarta1);
                }
                        break;
                    default:
                        printf("Opção inválida. Por favor, escolha uma opção válida, programa finalizado!!\n");
                        break;
                }
            break;
        
            case 2:
            printf("Programa finalizado pelo usuário!!\n");
            break;  
    
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida, programa finalizado!!\n");
            break;
    }

return 0;
}

