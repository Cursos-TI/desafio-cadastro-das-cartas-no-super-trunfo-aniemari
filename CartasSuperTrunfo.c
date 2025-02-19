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

    int main();

        printf("Bem-vindo ao desafio super trunfo! Hoje vamos cadastrar cidades! \n");
        printf("Vamos começar? \n");
    
        // Dados de coleta para cadastro

        char codigoCidade[10];
        char estado[3];
        char nomeCidade[50];
        float pib; 
        int populacao;
        float areaCidade; 
        int numPontosTuristicos;
    
        printf("Digite o estado (em sigla): \n");
        scanf("%s", estado);
    
        printf("Digite o código da cidade (ex: A01, B02): \n");
        scanf("%s", codigoCidade);
    
        printf("Digite o nome da cidade: \n");
        scanf("%s", nomeCidade);
    
        printf("Quantas pessoas moram na cidade?:\n"); 
        scanf("%d", &populacao);
    
        printf("Digite a área da cidade (em km²):\n");
        scanf("%f", &areaCidade);
    
        printf("Digite o PIB da cidade:\n");
        scanf("%f", &pib);
    
        printf("Digite a quantidade de pontos turísticos:\n");
        scanf("%d", &numPontosTuristicos);
    
        // Impressão dos dados cadastrados
        printf("\n--- Dados da cidade cadastrada ---\n");
        printf("Estado: %s\n", estado);
        printf("Código da cidade: %s\n", codigoCidade);
        printf("Nome da cidade: %s\n", nomeCidade);
        printf("População: %d\n", populacao);
        printf("Área da cidade: %.2f km²\n", areaCidade);
        printf("PIB da cidade: %.2f\n", pib);
        printf("Quantidade de pontos turísticos: %d\n", numPontosTuristicos);
    
        return 0;
    }
    

   