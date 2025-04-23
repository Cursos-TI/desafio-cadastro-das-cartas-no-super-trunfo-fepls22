// Estrutura da carta

#include <stdio.h>

typedef struct {
    char estado;  // Letra do estado:  'A' a 'H'
    char codigo[5]; // Código da Carta: Ex: A01, B03
    char nome_cidade[100]; // Nome da Cidade
    int populacao; // População
    float area; // Área (em km²)
    float pib; // PIB (bilhões de reais)
    int num_pontos_turisticos; // Número de Pontos Turísticos
} Carta;

// Função que retorna o nome do estado a partir da letra
const char* nome_estado(char letra) {
    switch (letra) {
        case 'A': return "São Paulo";
        case 'B': return "Minas Gerais";
        case 'C': return "Paraná";
        case 'D': return "Rio de Janeiro";
        case 'E': return "Bahia";
        case 'F': return "Rio Grande do Sul";
        case 'G': return "Pernambuco";
        case 'H': return "Ceará";
        default: return "Estado Desconhecido";
    }
}

// Função para ler os dados de uma carta
void ler_carta(Carta* carta, int numero) {
    printf("Digite os dados da Carta %d:\n", numero);
    
    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &carta->estado);
    
    printf("Código da Carta (Ex: A01, B03): ");
    scanf("%s", carta->codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", carta->nome_cidade); // Lê até nova linha
    
    printf("População: ");
    scanf("%d", &carta->populacao);
    
    printf("Área (em km²): ");
    scanf("%f", &carta->area);
    
    printf("PIB (bilhões de reais): ");
    scanf("%f", &carta->pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->num_pontos_turisticos);
}

// Função para exibir os dados da carta
void exibir_carta(Carta carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c (%s)\n", carta.estado, nome_estado(carta.estado));
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nome_cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.num_pontos_turisticos);
}

// Função principal
int main() {
    Carta carta1, carta2;
    
    // Lendo os dados das cartas
    ler_carta(&carta1, 1);
    ler_carta(&carta2, 2);
    
    // Exibindo os dados lidos
    exibir_carta(carta1, 1);
    exibir_carta(carta2, 2);
    
    return 0;
}