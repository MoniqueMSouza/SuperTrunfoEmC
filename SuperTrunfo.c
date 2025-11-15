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
    float C1_densidade;
    float C1_pibperc;
    float C1_superpoder;

    //Informações da Carta 2 - C2
    char C2_estado[50];
    char C2_codigo[50];
    char C2_nome[50];
    int C2_populaçao;
    float C2_area;
    float C2_pib;
    int C2_pontosturisticos;
    float C2_densidade;
    float C2_pibperc;
    float C2_superpoder;

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

    //Calcula a Densidade Populacional
    C1_densidade =  (float)C1_populaçao / C1_area;
    C2_densidade =  (float)C2_populaçao / C2_area;

    //Calcula o PIB per Capita
    C1_pibperc = (float)C1_pib / C1_populaçao;
    C2_pibperc = (float)C2_pib / C2_populaçao;

    //Calcula o Super Poder das Cartas
    C1_superpoder = (float)C1_populaçao + (float)C1_area + (float)C1_pib + (float)C1_pontosturisticos + (float)(1/C1_densidade);
    C2_superpoder = (float)C2_populaçao + (float)C2_area + (float)C2_pib + (float)C2_pontosturisticos + (float)(1/C2_densidade);
    
    //Exibindo as informações da Carta 1 
    printf("Carta 1 \n"); 
    printf("Estado: %s \n", C1_estado); 
    printf("Código: %s \n", C1_codigo); 
    printf("Nome da Cidade: %s \n", C1_nome); 
    printf("População: %d \n", C1_populaçao); 
    printf("Área: %.2f km² \n", C1_area); 
    printf("PIB: %.2f \n", C1_pib); 
    printf("Número de Pontos Turísticos: %d \n", C1_pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km² \n", C1_densidade);
    printf("PIB per Capita: %.2f Reais \n", C1_pibperc);
    printf("Super Poder:%.2f \n", C1_superpoder);
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
    printf("Densidade Populacional: %.2f hab/km² \n", C2_densidade);
    printf("PIB per Capita: %.2f Reais \n", C2_pibperc);
    printf("Super Poder: %.2f \n", C2_superpoder);

    // Cria uma linha vazia entre as informações da Carta 2 e a próxima mensagem.
    printf(" \n");
    
}