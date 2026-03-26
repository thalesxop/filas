#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct TLista
 * @brief Estrutura que gerencia um array dinâmico como uma lista sequencial.
 */
typedef struct {
    int tamanho;    // Capacidade máxima
    int ocupacao;   // Quantidade atual de elementos
    int *array;     // Ponteiro para os dados
} TLista;

/* ========================================================================= */

// Função: Inicializa a lista alocando memória para o array e definindo o tamanho.
// Parâmetros: ponteiro para a lista (TLista *) e tamanho máximo (int).
// Retorno: Nenhum (void).
void inicializarLista(TLista * const lista, int tamanho);

// Função: Desaloca a memória do array e reseta a ocupação e o tamanho.
// Parâmetros: ponteiro para a lista (TLista *).
// Retorno: Nenhum (void).
void liberarLista(TLista * const lista);

// Função: Exibe o tamanho, a ocupação e o endereço de memória do array da lista.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: Nenhum (void).
void mostrarDadosLista(TLista const * const lista);

// Função: Percorre o array e imprime os elementos na tela no formato { 1, 2, 3 }.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: Nenhum (void).
void mostrarLista(TLista const * const lista);

// Função: Verifica se a lista não possui nenhum elemento inserido.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: 1 se estiver vazia, 0 se tiver elementos (int).
int listaEstaVazia(TLista const * const lista);

// Função: Verifica se a quantidade de elementos atingiu o limite máximo da lista.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: 1 se estiver cheia, 0 se houver espaço (int).
int listaEstaCheia(TLista const * const lista);

// Função: Insere um elemento na posição 0, deslocando os existentes para a direita.
// Parâmetros: ponteiro para a lista (TLista *) e o valor a inserir (int).
// Retorno: Nenhum (void).
void inserirInicio(TLista * const lista, int elemento);

// Função: Adiciona um elemento na última posição disponível da lista.
// Parâmetros: ponteiro para a lista (TLista *) e o valor a inserir (int).
// Retorno: Nenhum (void).
void inserirFimLista(TLista * const lista, int elemento);

// Função: Retorna o valor que está armazenado no primeiro índice (0) da lista.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: O valor inteiro do início ou -1 se a lista estiver vazia (int).
int acessarInicio(const TLista *lista);

// Função: Retorna o valor que está na última posição ocupada da lista.
// Parâmetros: ponteiro constante para a lista (const TLista *).
// Retorno: O valor inteiro do fim ou -1 se a lista estiver vazia (int).
int acessarFimLista(TLista const * const lista);

// Função: Remove o primeiro elemento e desloca todos os outros para a esquerda.
// Parâmetros: ponteiro para a lista (TLista *).
// Retorno: Nenhum (void).
void retirarInicio(TLista * const lista);

// Função: Remove o último elemento apenas decrementando a contagem de ocupação.
// Parâmetros: ponteiro para a lista (TLista *).
// Retorno: Nenhum (void).
void retirarFimlista(TLista * const lista);

#endif