#include <stdio.h>

// corrija o nome da struct aqui
struct carta { 

    char estado[50];
    char codigo[10];
    char cidade[50];
    int area;
    int populacao;
    float pib;
    int pontos_turisticos;
};
    int main(){

    // Criando duas Cartas fixas
    struct carta carta1; 
    struct  carta carta2;

    // carta 1 - Sao Paulo

    snprintf(carta1.estado,
    sizeof(carta1.estado),  "Sao Paulo");
    snprintf(carta1.codigo,
    sizeof(carta1.codigo),   "SP01");
    snprintf(carta1.cidade,
    sizeof(carta1.cidade),  "Sao Paulo - Capital");

    carta1. populacao = 12300000;   //habitante
    carta1. area      = 1521.11;    //Km²
    carta1. pib       =750000000.00; //em milhoes
    carta1. pontos_turisticos = 15; 
    
    // carta 2 - Ceara (Fortaleza)

    snprintf(carta2.estado,
    sizeof(carta2.estado),   "Ceara");
    snprintf(carta2.codigo,
    sizeof(carta2.codigo),   "CE02");
    snprintf(carta2.cidade,
    sizeof(carta2.cidade),   "Fortaleza");

    carta2.populacao = 2700000;     //habitantes
    carta2.area      = 314.93;      //Km²
    carta2.pib       = 67000000.00; //em milhoes
    carta2.pontos_turisticos = 12;

    // Exibicao das Cartas

    printf("=== Carta 1 ===\n");

    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d habitantes\n", carta1.populacao);
    printf("Area: %f Km²\n", carta1.area);
    printf("PIB: %.2f milhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("=== Carta 2 ===\n");

    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %S\n", carta2.cidade);
    printf("Populacao: %d habitantes\n", carta2.populacao);
    printf("Area: %.2f Km²\n", carta2.area);
    printf("PIB: %.2f milhoes\n", carta2.pib); 
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}