#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Definição do atributos que possuem valor inteiro
    int city_code, number_off_tourist_attractions;

    //Definição do atributo nome, sendo ele do tivpo char como um vetor de 100 posições
    char city_name[100];

    //Definição do atributos float
    float city_population, city_area, city_pib;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Solicitação / leitura dos valores para as variaveis

    //Entrada do código da cidade
    printf("\nInforme o código da cidade: \n");
    scanf("%d", &city_code);

    //Entrada do numero de pontos turisticos
    printf("\nInforme o número de pontos turisticos: \n");
    scanf("%d", &number_off_tourist_attractions);

    //Entrada do nome da cidade
    printf("\nInforme o nome da cidade: \n");
    scanf("%s", city_name);

    //Entrada a poupulacao
    printf("\nInforme a poupulação: \n");
    scanf("%f", &city_population);

    //Entrada a area da cidade
    printf("\nInforme a area da cidade: \n");
    scanf("%f", &city_area);

    //Entrada o PIB
    printf("\nInforme o PIB: \n");
    scanf("%f", &city_pib);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibição do codigo da cidade
    printf("\nO código da cidade é : %d\n", city_code);

    //Exibição do numero de atracoes turisticas
    printf("\nO numero de pontos turisticos da cidade é : %d\n", number_off_tourist_attractions);

    //Exibição do nome da cidade
    printf("\nO nome da cidade é : %s\n", city_name);

    //Exibição da poupulacao da cidade
    printf("\nA poupulação da cidade é : %f\n", city_population);

    //Exibição da area da cidade
    printf("\nA area da cidade é : %f\n", city_area);

    //Exibição do PIB da cidade
    printf("\nO PIB da cidade é : %f\n", city_pib);

    return 0;
}
