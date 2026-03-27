#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

/* * Função: Exibe informações técnicas da estrutura.
 * Parâmetros: ponteiro constante para a lista (TLista *).
 * Retorno: Nenhum (void).
 */
void mostrarDadosLista(TLista const * const lista){
    printf("\nTamanho da lista: %d\n", lista->tamanho);
    printf("Ocupacao: %d\n", lista->ocupacao);
    printf("Endereco do array: %p\n", (void *) lista->array);
}

/* * Função: Aloca memória e define o tamanho inicial da lista.
 * Parâmetros: ponteiro para a lista (TLista *) e tamanho (int).
 * Retorno: Nenhum (void).
 */
void inicializarLista(TLista * const lista, int tamanho){
    lista->tamanho = tamanho;
    lista->ocupacao = 0;
    lista->array = (int *) malloc(lista->tamanho * sizeof(int));

    if(lista->array == NULL){
        printf("Erro ao alocar memoria para a lista!\n");
        lista->tamanho = 0;
        lista->ocupacao = 0;
    }
}

/* * Função: Libera a memória do array e limpa os ponteiros.
 * Parâmetros: ponteiro para a lista (TLista *).
 * Retorno: Nenhum (void).
 */
void liberarLista(TLista * const lista){
    if(lista->array != NULL){
        free(lista->array);
        lista->array = NULL;
    }
    lista->tamanho = 0;
    lista->ocupacao = 0;
}

/* * Função: Imprime os elementos da lista na tela.
 * Parâmetros: ponteiro constante para a lista (TLista *).
 * Retorno: Nenhum (void).
 */
void mostrarLista(TLista const * const lista){
    if(listaEstaVazia(lista)){
        printf("{}\n");
        return;
    }

    printf("{ ");
    for(int i = 0; i < lista->ocupacao; i++){
        printf("%d%s", lista->array[i], (i < lista->ocupacao - 1) ? ", " : "");
    }
    printf(" }\n");
}

/* * Função: Verifica se a lista está sem elementos.
 * Parâmetros: ponteiro constante para a lista (TLista *).
 * Retorno: 1 para vazia, 0 para não vazia (int).
 */
int listaEstaVazia(TLista const * const lista){
    return (lista->ocupacao == 0);
}

/* * Função: Verifica se a lista atingiu o limite de tamanho.
 * Parâmetros: ponteiro constante para a lista (TLista *).
 * Retorno: 1 para cheia, 0 para não cheia (int).
 */
int listaEstaCheia(TLista const * const lista){
    return (lista->ocupacao == lista->tamanho);
}

/* ================= OPERAÇÕES DE FIM ================= */

void inserirFimLista(TLista * const lista, int elemento){
    if(listaEstaCheia(lista)){
        printf("Lista cheia!\n");
        return;
    }
    lista->array[lista->ocupacao] = elemento;
    lista->ocupacao++;
}

int acessarFimLista(TLista const * const lista){
    if(listaEstaVazia(lista)) return -1;
    return lista->array[lista->ocupacao - 1];
}

void retirarFimlista(TLista * const lista){
    if(listaEstaVazia(lista)) return;
    lista->ocupacao--;
}

/* ================= OPERAÇÕES DE INÍCIO ================= */

void inserirInicio(TLista * const lista, int elemento){
    if(listaEstaCheia(lista)) return;
    for(int i = lista->ocupacao; i > 0; i--){
        lista->array[i] = lista->array[i - 1];
    }
    lista->array[0] = elemento;
    lista->ocupacao++;
}

int acessarInicio(const TLista *lista){
    if(listaEstaVazia(lista)) return -1;
    return lista->array[0];
}

void retirarInicio(TLista * const lista){
    if(listaEstaVazia(lista)) return;
    for(int i = 0; i < lista->ocupacao - 1; i++){
        lista->array[i] = lista->array[i + 1];
    }
    lista->ocupacao--;
}

/* ================= OPERAÇÕES POR POSIÇÃO ================= */

void inserirNaPosicao(TLista * const lista, int posicao, int elemento) {
    if (listaEstaCheia(lista)) {
        printf("Lista cheia!\n");
        return;
    }
    if (posicao < 0 || posicao > lista->ocupacao) {
        printf("Posicao invalida!\n");
        return;
    }
    int p = lista->ocupacao; 
    while (p != posicao) {
        lista->array[p] = lista->array[p - 1];
        p--;
    }
    lista->array[posicao] = elemento;
    lista->ocupacao++;
}

int acessarPosicao(TLista const * const lista, int posicao) {
    if (listaEstaVazia(lista)) return -1;
    if (posicao < 0 || posicao >= lista->ocupacao) {
        printf("Posicao invalida!\n");
        return -1;
    }
    return lista->array[posicao];
}

void retirarPosicao(TLista * const lista, int posicao) {
    if (listaEstaVazia(lista)) return;
    if (posicao < 0 || posicao >= lista->ocupacao) {
        printf("Posicao invalida!\n");
        return;
    }
    while (posicao < lista->ocupacao - 1) {
        lista->array[posicao] = lista->array[posicao + 1];
        posicao++;
    }
    lista->ocupacao--;
}