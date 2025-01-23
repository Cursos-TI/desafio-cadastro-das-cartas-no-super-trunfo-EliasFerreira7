#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//Declaração global das variavéis

//Definição do atributos que possuem valor inteiro
int city_code, number_off_tourist_attractions;

//Definição do atributo nome, sendo ele do tivpo char como um vetor de 100 posições
char city_name[100];

//Definição do atributos float
float city_population, city_area, city_pib, population_density, pib_per_capita;


//Funcao para obter os dados
void get_data() {
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
}

float obtain_population_density() {
    return city_population / city_area;
}

float obtain_pib_per_capita() {
    return city_pib / city_population;
}

void show_data() {
    //Exibição do codigo da cidade
    printf("\n\nO código da cidade é : %d\n", city_code);

    //Exibição do numero de atracoes turisticas
    printf("\nO numero de pontos turisticos da cidade é : %d\n", number_off_tourist_attractions);

    //Exibição do nome da cidade
    printf("\nO nome da cidade é : %s\n", city_name);

    //Exibição da poupulacao da cidade (aproximacao de 2 casas decimais)
    printf("\nA poupulação da cidade é : %.2f\n", city_population);

    //Exibição da area da cidade (aproximacao de 2 casas decimais)
    printf("\nA area da cidade é : %.2f\n", city_area);

    //Exibição do PIB da cidade (aproximacao de 2 casas decimais)
    printf("\nO PIB da cidade é : %.2f\n", city_pib);

    //Exibição da densidade poupulacional da cidade (aproximacao de 2 casas decimais)
    printf("\nA densidade poupulacional da cidade é : %.2f\n", population_density);

    //Exibição do pib per cpita da cidade (aproximacao de 2 casas decimais)
    printf("\nO PIB per capita da cidade é : %.2f\n\n", pib_per_capita);
}

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    get_data();

    population_density = obtain_population_density();

    pib_per_capita = obtain_pib_per_capita();

    show_data();

    return 0;
}
