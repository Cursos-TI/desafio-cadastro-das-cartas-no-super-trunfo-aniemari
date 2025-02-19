#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    #include <stdio.h>

    printf("Bem vindo ao desafio super trunfo! hoje vamos cadastrar cidades! \n");

    printf("vamos começar? \n");

    // dados de coleta para cadastro
    char codigoCidade;
    char estado;
    char nomeCidade;
    float pib; 
    int populacao;
    float areaCidade; 
    int numPontosTuristicos;

    printf("digite o estado (em sigla): \n");
    scanf("%s", &estado);

    printf("Digite o código da cidade (ex: A01, B02): \n");
    scanf("%s", &codigoCidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeCidade);

    printf("Quantas pessoas moram na cidade?:\n"); 
    scanf("%d", &populacao);

    printf("Digite a área  da cidade:\n");
    scanf("%d", &areaCidade);

    printf("digite o PIB da cidade:\n");
    scanf("%d", &pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &numPontosTuristicos);
}
void imprimirDados(char codigoCidade[], char nomeCidade[], float pib, int populacao, float area, int numPontosTuristicos) {
    printf("\n--- Dados da Cidade ---\n");
    printf("Código da Cidade: %s\n", codigoCidade);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("PIB: %.2f\n", pib);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("Pontos Turísticos: %d\n", numPontosTuristicos);
}