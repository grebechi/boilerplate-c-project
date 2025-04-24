#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../include/utils.h"

// Assinatura das funções
void menuPrincipal();
void menu1();
void menu2();

// Função principal para iniciar o menu
int main() {
    menuPrincipal();
    return 0;
}


// Menu principal do programa
void menuPrincipal() {
    int opcao;
    do {
        limparTerminal();
        printf("\n=== Menu Principal ===\n");
        printf("1 - Menu 1\n");
        printf("2 - Menu 2\n");
        printf("0 - Sair\n");
        printf("======================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch (opcao) {
            case 1:
                menu1();
                break;
            case 2:
                menu2();
                break;
            case 0:
                printf("\nSaindo do Sistema...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
                pausarTerminal();
                break;
        }
    } while (opcao != 0);
}


void menu1() {
    limparTerminal();
    
    pausarTerminal();
}


void menu2() {
    limparTerminal();

    pausarTerminal();
}
