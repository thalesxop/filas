#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void mostrarDadosLista(TLista const * const lista) {
    printf("\nTamanho: %d | Ocupacao: %d | Endereco: %p\n", lista->tamanho, lista->ocupacao, (void*)lista->array);
}

void inicializarLista(TLista * const lista, int tamanho) {
    lista->tamanho = tamanho;
    lista->ocupacao = 0;
    lista->array = (int*) malloc(lista->tamanho * sizeof(int));
}

void liberarLista(TLista * const lista) {
    if (lista->array != NULL) { free(lista->array); lista->array = NULL; }
    lista->tamanho = 0; lista->ocupacao = 0;
}

void mostrarLista(TLista const * const lista) {
    if (listaEstaVazia(lista)) { printf("{ }\n"); return; }
    printf("{ ");
    for (int i = 0; i < lista->ocupacao; i++) printf("%d ", lista->array[i]);
    printf("}\n");
}

int listaEstaVazia(TLista const * const lista) {
    return (lista->ocupacao == 0);
}

int listaEstaCheia(TLista const * const lista) {
    return (lista->ocupacao == lista->tamanho);
}

void inserirInicioLista(TLista * const lista, int elemento) {
    if (listaEstaCheia(lista)) return;
    for (int i = lista->ocupacao; i > 0; i--) {
        lista->array[i] = lista->array[i - 1];
    }
    // A LINHA ABAIXO FOI CORRIGIDA COM
    lista->array = elemento; 
    lista->ocupacao++;
}

void inserirFimLista(TLista * const lista, int elemento) {
    if (listaEstaCheia(lista)) return;
    lista->array[lista->ocupacao] = elemento;
    lista->ocupacao++;
}

int acessarInicioLista(TLista const * const lista) {
    if (listaEstaVazia(lista)) return -1;
    // A LINHA ABAIXO FOI CORRIGIDA COM
    return lista->array; 
}

int acessarFimLista(TLista const * const lista) {
    if (listaEstaVazia(lista)) return -1;
    return lista->array[lista->ocupacao - 1];
}

void retirarInicioLista(TLista * const lista) {
    if (listaEstaVazia(lista)) return;
    for (int i = 0; i < lista->ocupacao - 1; i++) {
        lista->array[i] = lista->array[i + 1];
    }
    lista->ocupacao--;
}

void retirarFimlista(TLista * const lista) {
    if (listaEstaVazia(lista)) return;
    lista->ocupacao--;
}