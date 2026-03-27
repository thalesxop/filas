#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct TLista
 * @brief Estrutura que gerencia um array dinâmico como uma lista sequencial.
 */
typedef struct {
    int tamanho;    // Capacidade máxima de elementos
    int ocupacao;   // Quantidade atual de elementos na lista
    int *array;     // Ponteiro para o vetor de inteiros
} TLista;

/* ================= GERENCIAMENTO E ESTADO ================= */

// Função: Aloca memória para o array e define o tamanho inicial.
// Parâmetros: ponteiro para a lista (TLista *) e tamanho desejado (int).
// Retorno: Nenhum (void).
void inicializarLista(TLista * const lista, int tamanho);

// Função: Libera a memória alocada para o array e reseta a estrutura.
// Parâmetros: ponteiro para a lista (TLista *).
// Retorno: Nenhum (void).
void liberarLista(TLista * const lista);

// Função: Verifica se a lista não possui nenhum elemento.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: 1 se estiver vazia, 0 caso contrário (int).
int listaEstaVazia(TLista const * const lista);

// Função: Verifica se a lista atingiu sua capacidade máxima.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: 1 se estiver cheia, 0 caso contrário (int).
int listaEstaCheia(TLista const * const lista);

// Função: Imprime todos os elementos da lista e informações técnicas.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: Nenhum (void).
void mostrarLista(TLista const * const lista);


/* ================= OPERAÇÕES DE INÍCIO ================= */

// Função: Insere um elemento na primeira posição, deslocando os demais.
// Parâmetros: ponteiro para a lista (TLista *) e o valor (int).
// Retorno: Nenhum (void).
void inserirInicio(TLista * const lista, int elemento);

// Função: Retorna o valor do primeiro elemento da lista.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: O valor inteiro ou -1 se a lista estiver vazia (int).
int acessarInicio(const TLista *lista);

// Função: Remove o primeiro elemento e reorganiza a lista.
// Parâmetros: ponteiro para a lista (TLista *).
// Retorno: Nenhum (void).
void retirarInicio(TLista * const lista);

/* ================= OPERAÇÕES DE FIM ================= */

// Função: Adiciona um elemento na última posição disponível.
// Parâmetros: ponteiro para a lista (TLista *) e o valor (int).
// Retorno: Nenhum (void).
void inserirFimLista(TLista * const lista, int elemento);

// Função: Retorna o valor do último elemento ocupado.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: O valor inteiro ou -1 se a lista estiver vazia (int).
int acessarFimLista(TLista const * const lista);

// Função: Remove o último elemento da lista.
// Parâmetros: ponteiro para a lista (TLista *).
// Retorno: Nenhum (void).
void retirarFimlista(TLista * const lista);

/* ================= OPERAÇÕES POR POSIÇÃO ================= */

// Função: Insere um elemento em qualquer índice válido, deslocando os sucessores.
// Parâmetros: ponteiro para a lista (TLista *), posição (int) e elemento (int).
// Retorno: Nenhum (void).
void inserirNaPosicao(TLista * const lista, int posicao, int elemento);

// Função: Retorna o valor de um elemento em um índice específico.
// Parâmetros: ponteiro constante para a lista (const TLista *), posição (int).
// Retorno: O valor inteiro ou -1 se a posição for inválida (int).
int acessarPosicao(TLista const * const lista, int posicao);

// Função: Remove um elemento de um índice específico e reorganiza os sucessores.
// Parâmetros: ponteiro para a lista (TLista *), posição (int).
// Retorno: Nenhum (void).
void retirarPosicao(TLista * const lista, int posicao);

#endif