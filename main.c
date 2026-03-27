#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    TLista minhaLista;
    int opcao, valor, tam, posicao;

    printf("Digite o tamanho maximo da lista: ");
    if (scanf("%d", &tam) != 1) {
        printf("Tamanho invalido!\n");
        return 1;
    }
    
    inicializarLista(&minhaLista, tam);

    do {
        printf("\n========== INICIO ==========\n");
        printf("1 - Inserir no Inicio\n");
        printf("2 - Acessar Inicio\n");
        printf("3 - Retirar do Inicio\n");
        printf("============================\n");

        printf("\n=========== FIM ============\n");
        printf("4 - Inserir no Fim\n");
        printf("5 - Acessar Fim\n");
        printf("6 - Retirar do Fim\n");
        printf("============================\n");

        printf("\n========= POSICAO ==========\n");
        printf("7 - Inserir na posicao desejada\n");
        printf("8 - Acessar na posicao desejada\n");
        printf("9 - Retirar na posicao desejada\n");
        printf("============================\n");

        printf("\n========== GERAL ===========\n");
        printf("10 - Mostrar Lista\n");
        printf("11 - Sair\n"); 
        printf("============================\n\n\n\n");
        
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n'); // Limpa buffer em caso de entrada invalida
            continue;
        }

        switch (opcao) {
            case 1:
                printf("Valor para o inicio: ");
                scanf("%d", &valor);
                inserirInicio(&minhaLista, valor);
                break;

            case 2:
                valor = acessarInicio(&minhaLista);
                if (valor != -1) printf("Elemento no inicio: %d\n", valor);
                break;

            case 3:
                retirarInicio(&minhaLista);
                break;

            case 4:
                printf("Valor para o fim: ");
                scanf("%d", &valor);
                inserirFimLista(&minhaLista, valor);
                break;

            case 5:
                valor = acessarFimLista(&minhaLista);
                if (valor != -1) printf("Elemento no fim: %d\n", valor);
                break;

            case 6:
                retirarFimlista(&minhaLista);
                break;

            case 7:
                printf("Posicao desejada: ");
                scanf("%d", &posicao);
                printf("Valor para inserir: ");
                scanf("%d", &valor);
                inserirNaPosicao(&minhaLista, posicao, valor);
                break;

            case 8:
                printf("Posicao para acessar: ");
                scanf("%d", &posicao);
                valor = acessarPosicao(&minhaLista, posicao);
                if (valor != -1) printf("Valor na posicao %d: %d\n", posicao, valor);
                break;

            case 9:
                printf("Posicao para retirar: ");
                scanf("%d", &posicao);
                retirarPosicao(&minhaLista, posicao);
                break;

            case 10:
                printf("Conteudo da Lista: ");
                mostrarLista(&minhaLista);
                break;

            case 11:
                printf("Encerrando e liberando memoria...\n");
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 11);

    liberarLista(&minhaLista);

    return 0;
}