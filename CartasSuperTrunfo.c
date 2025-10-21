#include <stdio.h>
#include <string.h>

// Definição da struct para a carta
struct Carta {
    char nomePais[50];
    char capital[50];
    int populacao;
    float area;
};

int main() {
    // Criação de duas variáveis do tipo struct Carta
    struct Carta carta1, carta2;

    // ----- Cadastro da primeira carta -----
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o nome do país: Brasil");
    scanf("%s", carta1.nomePais);
    printf("Digite a capital: Brasília");
    scanf("%s", carta1.capital);
    printf("Digite a população (em milhões): 211,7");
    scanf("%d", &carta1.populacao);
    printf("Digite a área (em km²): 8.515.767");
    scanf("%f", &carta1.area);

    // ----- Cadastro da segunda carta -----
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o nome do país: Suécia");
    scanf("%s", carta2.nomePais);
    printf("Digite a capital: Estocolmo");
    scanf("%s", carta2.capital);
    printf("Digite a população (em milhões): 10.025.720");
    scanf("%d", &carta2.populacao);
    printf("Digite a área (em km²): 450.295");
    scanf("%f", &carta2.area);

    // ----- Exibição dos dados cadastrados -----
    printf("\n--- Cartas Cadastradas ---\n");
    printf("\n** Carta 1 **\n");
    printf("País: %s\n", carta1.nomePais);
    printf("Capital: %s\n", carta1.capital);
    printf("População: %d milhões\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);

    printf("\n** Carta 2 **\n");
    printf("País: %s\n", carta2.nomePais);
    printf("Capital: %s\n", carta2.capital);
    printf("População: %d milhões\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);

    return 0;
}
