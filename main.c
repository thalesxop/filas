#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    TLista minhaLista;
    int opcao, valor, tam;

    // Solicita o tamanho para inicializar a lista dinamicamente
    printf("Digite o tamanho maximo da lista: ");
    scanf("%d", &tam);
    inicializarLista(&minhaLista, tam);

    do {
        printf("\n==========INICIO==========\n");
        printf("1 - Iniciar Inicio da Lista;\n");
        printf("2 - Acessar Inicio da Lista\n");
        printf("3 - Retirar Inicio da Lista\n");
        printf("===========================\n");

        printf("\n==========FIM==========\n");
        printf("4 - Iniciar Fim da Lista;\n");
        printf("5 - Acessar Fim da Lista;\n");
        printf("6 - Retirar Fim da Lista;\n");
        printf("=========================\n");

        printf("\n==========GERAL===========\n");
        printf("10 - Mostrar Lista;\n");
        printf("11 - Sair do Programa;\n");
        printf("=========================\n");
        
        printf("Escolha uma opcao: ");
        if (scanf("%d", &opcao) != 1) {
            // Limpa o buffer caso o usuário digite letras
            while (getchar() != '\n');
            continue;
        }

        switch (opcao) {
            case 1:
                if (!listaEstaCheia(&minhaLista)) {
                    printf("Valor para o inicio: ");
                    scanf("%d", &valor);
                    inserirInicioLista(&minhaLista, valor);
                } else {
                    printf("Erro: Lista cheia!\n");
                }
                break;

            case 2:
                valor = acessarInicioLista(&minhaLista);
                if (valor != -1) {
                    printf("Elemento no inicio: %d\n", valor);
                }
                break;

            case 3:
                retirarInicioLista(&minhaLista);
                break;

            case 4:
                if (!listaEstaCheia(&minhaLista)) {
                    printf("Valor para o fim: ");
                    scanf("%d", &valor);
                    inserirFimLista(&minhaLista, valor);
                } else {
                    printf("Erro: Lista cheia!\n");
                }
                break;

            case 5:
                valor = acessarFimLista(&minhaLista);
                if (valor != -1) {
                    printf("Elemento no fim: %d\n", valor);
                }
                break;

            case 6:
                retirarFimlista(&minhaLista);
                break;

            case 10:
                printf("Conteudo da Lista: ");
                mostrarLista(&minhaLista);
                break;

            case 11:
                printf("Finalizando programa e liberando recursos...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 11);

    // Libera a memória alocada no array antes de fechar o programa
    liberarLista(&minhaLista);

    return 0;
}