#include <stdio.h>

int main () {

    //Informações da Carta 1 - C1
    char C1estado[50];
    char C1codigo[50];
    char C1nome[50];
    int C1populaçao;
    float C1area;
    float C1pib;
    int C1pontosturisticos;

    //Informações da Carta 2 - C2
    char C2estado[50];
    char C2codigo[50];
    char C2nome[50];
    int C2populaçao;
    float C2area;
    float C2pib;
    int C2pontosturisticos;

    //Registrando as informações da Carta 1 
    printf("Primeiro, vamos registrar as informações da CARTA 1. \n"); 

    printf("Digite apenas uma letra: De 'A' a 'H'. \n"); 
    scanf ("%s", &C1estado); 

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03). \n"); 
    scanf ("%s", &C1codigo); 

    printf("Digite o nome da cidade. \n"); 
    scanf ("%s", &C1nome); 

    printf("Digite o número de Habitantes. \n"); 
    scanf ("%d", &C1populaçao); 

    printf("Digite a área da cidade em quilômetros quadrados. \n"); 
    scanf ("%f", &C1area); 

    printf("Digite o Produto Interno Bruto da cidade. \n"); 
    scanf ("%f", &C1pib); 

    printf("Digite a quantidade de pontos turísticos na cidade. \n"); 
    scanf ("%d", &C1pontosturisticos);


}