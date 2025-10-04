#include <stdio.h>

int main () {

    //Informações da Carta 1 - C1
    char C1_estado[50];
    char C1_codigo[50];
    char C1_nome[50];
    int C1_populaçao;
    float C1_area;
    float C1_pib;
    int C1_pontosturisticos;

    //Informações da Carta 2 - C2
    char C2_estado[50];
    char C2_codigo[50];
    char C2_nome[50];
    int C2_populaçao;
    float C2_area;
    float C2_pib;
    int C2_pontosturisticos;

    //Registrando as informações da Carta 1 
    printf("Primeiro, vamos registrar as informações da CARTA 1. \n"); 

    printf("Digite apenas uma letra: De 'A' a 'H'. \n"); 
    scanf ("%s", &C1_estado); 

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n"); 
    scanf ("%s", &C1_codigo); 

    printf("Digite o nome da cidade. \n"); 
    scanf ("%s", &C1_nome); 

    printf("Digite o número de Habitantes. \n"); 
    scanf ("%d", &C1_populaçao); 

    printf("Digite a área da cidade em quilômetros quadrados. \n"); 
    scanf ("%f", &C1_area); 

    printf("Digite o Produto Interno Bruto da cidade. \n"); 
    scanf ("%f", &C1_pib); 

    printf("Digite a quantidade de pontos turísticos na cidade. \n"); 
    scanf ("%d", &C1_pontosturisticos);

     //Registrando as informações da Carta 2 
    printf("Agora, vamos registrar as informações da CARTA 2. \n"); 

    printf("Digite apenas uma letra: De 'A' a 'H'. \n"); 
    scanf ("%s", &C2_estado); 

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n"); 
    scanf ("%s", &C2_codigo); 

    printf("Digite o nome da cidade. \n"); 
    scanf ("%s", &C2_nome); 

    printf("Digite o número de Habitantes. \n"); 
    scanf ("%d", &C2_populaçao); 

    printf("Digite a área da cidade em quilômetros quadrados. \n"); 
    scanf ("%f", &C2_area); 

    printf("Digite o Produto Interno Bruto da cidade. \n"); 
    scanf ("%f", &C2_pib); 

    printf("Digite a quantidade de pontos turísticos na cidade. \n"); 
    scanf ("%d", &C2_pontosturisticos);

    // Cria uma linha vazia entre as informações solicitadas ao usuário e a Carta 1
    printf(" \n");

    //Exibindo as informações da Carta 1 
    printf("Carta 1 \n"); 
    printf("Estado: %s \n", C1_estado); 
    printf("Código: %s \n", C1_codigo); 
    printf("Nome da Cidade: %s \n", C1_nome); 
    printf("População: %d \n", C1_populaçao); 
    printf("Área: %.2f km² \n", C1_area); 
    printf("PIB: %.2f \n", C1_pib); 
    printf("Número de Pontos Turísticos: %d \n", C1_pontosturisticos);

    // Cria uma linha vazia entre as informações da Carta 1 e 2.
    printf(" \n");

    //Exibindo as informações da Carta 2 
    printf("Carta 2 \n"); 
    printf("Estado: %s \n", C2_estado); 
    printf("Código: %s \n", C2_codigo); 
    printf("Nome da Cidade: %s \n", C2_nome); 
    printf("População: %d \n", C2_populaçao); 
    printf("Área: %.2f km² \n", C2_area); 
    printf("PIB: %.2f \n", C2_pib); 
    printf("Número de Pontos Turísticos: %d \n", C2_pontosturisticos);

    // Cria uma linha vazia entre as informações da Carta 2 e a próxima mensagem.
    printf(" \n");
    
}