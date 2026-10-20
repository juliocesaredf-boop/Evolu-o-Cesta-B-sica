#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_CTYPE, "Portuguese"); 

    // 1. DECLARAÇÃO DE VARIÁVEIS PARA OS 3 PRODUTOS
    char nome1[50], nome2[50], nome3[50];
    float pAnt1, pAtual1, var1;
    float pAnt2, pAtual2, var2;
    float pAnt3, pAtual3, var3;
    char sit1[20], sit2[20], sit3[20];

    // 2. COLETA DE DADOS E CÁLCULOS

    // --- PRODUTO 1 ---
    printf("\n--- DADOS DO PRODUTO 1 ---\n");
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", nome1); 
    printf("Preço anterior (R$): ");
    scanf("%f", &pAnt1);
    printf("Preço atual (R$): ");
    scanf("%f", &pAtual1);

    var1 = ((pAtual1 - pAnt1) / pAnt1) * 100;

    if (var1 > 0) {
        strcpy(sit1, "AUMENTO");
    } else if (var1 < 0) {
        strcpy(sit1, "QUEDA");
    } else {
        strcpy(sit1, "ESTÁVEL");
    }

    // --- PRODUTO 2 ---
    printf("\n--- DADOS DO PRODUTO 2 ---\n");
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", nome2); 
    printf("Preço anterior (R$): ");
    scanf("%f", &pAnt2);
    printf("Preço atual (R$): ");
    scanf("%f", &pAtual2);

    var2 = ((pAtual2 - pAnt2) / pAnt2) * 100;

    if (var2 > 0) {
        strcpy(sit2, "AUMENTO");
    } else if (var2 < 0) {
        strcpy(sit2, "QUEDA");
    } else {
        strcpy(sit2, "ESTÁVEL");
    }

    // --- PRODUTO 3 ---
    printf("\n--- DADOS DO PRODUTO 3 ---\n");
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", nome3); 
    printf("Preço anterior (R$): ");
    scanf("%f", &pAnt3);
    printf("Preço atual (R$): ");
    scanf("%f", &pAtual3);

    var3 = ((pAtual3 - pAnt3) / pAnt3) * 100;

    if (var3 > 0) {
        strcpy(sit3, "AUMENTO");
    } else if (var3 < 0) {
        strcpy(sit3, "QUEDA");
    } else {
        strcpy(sit3, "ESTÁVEL");
    }

    // 3. EXIBIÇÃO DO RELATÓRIO FINAL DETALHADO
    printf("\n===================================================================\n");
    printf("          RELATÓRIO DE VARIAÇÃO DE PREÇOS - CESTA BÁSICA           \n");
    printf("===================================================================\n");
    
    printf("1. Produto: %s\n", nome1);
    printf("   Preço Anterior : R$ %.2f\n", pAnt1);
    printf("   Preço Atual    : R$ %.2f\n", pAtual1);
    printf("   Variação       : %.2f%%\n", var1);
    printf("   Situação       : %s\n", sit1);
    printf("-------------------------------------------------------------------\n");
    
    printf("2. Produto: %s\n", nome2);
    printf("   Preço Anterior : R$ %.2f\n", pAnt2);
    printf("   Preço Atual    : R$ %.2f\n", pAtual2);
    printf("   Variação       : %.2f%%\n", var2);
    printf("   Situação       : %s\n", sit2);
    printf("-------------------------------------------------------------------\n");
    
    printf("3. Produto: %s\n", nome3);
    printf("   Preço Anterior : R$ %.2f\n", pAnt3);
    printf("   Preço Atual    : R$ %.2f\n", pAtual3);
    printf("   Variação       : %.2f%%\n", var3);
    printf("   Situação       : %s\n", sit3);
    printf("===================================================================\n");

    return 0;
}