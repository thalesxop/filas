#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

/**
 * @struct TLista
 * @brief Estrutura que gerencia um array dinâmico como uma lista sequencial.
 */
typedef struct {
    int tamanho;    // Capacidade máxima de elementos no array
    int ocupacao;   // Quantidade atual de elementos na lista
    int *array;     // Ponteiro para o vetor de dados (alocação dinâmica)
} TLista;

/*=========================================================
    FUNÇÃO: inicializarLista
    DESCRIÇÃO: Aloca a memória para o array e define o tamanho.
    PARAMETROS: 
        1 - lista: ponteiro para a struct que será inicializada.
        2 - tamanho: quantidade de elementos que a lista contém.
    RETORNO: Nenhum (void).
  =========================================================*/
void inicializarLista(TLista * const lista, int tamanho);

/*=========================================================
    FUNÇÃO: mostrarDadosLista
    DESCRIÇÃO: Exibe as informações técnicas da struct (Metadados).
    PARAMETROS: 
        1 - lista: ponteiro para a struct com os dados da lista.
    RETORNO: Nenhum (void).
  =========================================================*/
void mostrarDadosLista(TLista const * const lista);

/*=========================================================
    FUNÇÃO: mostrarLista
    DESCRIÇÃO: Percorre o array e imprime os elementos na tela ou { } se vazia.
    PARAMETROS: 
        1 - lista: ponteiro para a struct com os dados da lista.
    RETORNO: Nenhum (void).
  =========================================================*/
void mostrarLista(TLista const * const lista);

/*=========================================================
    FUNÇÃO: liberarLista
    DESCRIÇÃO: Libera o espaço de memória usado pelo array dinâmico.
    PARAMETROS: 
        1 - lista: ponteiro para a struct com os dados da lista.
    RETORNO: Nenhum (void).
  =========================================================*/
void liberarLista(TLista * const lista);

/*=========================================================
    FUNÇÃO: listaEstaVazia
    DESCRIÇÃO: Verifica se a lista possui elementos armazenados.
    PARAMETROS: 
        1 - lista: ponteiro para a struct com os dados da lista.
    RETORNO: 1 se estiver vazia, 0 se não estiver vazia.
  =========================================================*/
int listaEstaVazia(TLista const * const lista);

/*=========================================================
    FUNÇÃO: listaEstaCheia
    DESCRIÇÃO: Verifica se a ocupação atingiu o limite máximo (tamanho).
    PARAMETROS: 
        1 - lista: ponteiro para a struct com os dados da lista.
    RETORNO: 1 se estiver cheia, 0 se não estiver cheia.
  =========================================================*/
int listaEstaCheia(TLista const * const lista);

/*=========================================================
    FUNÇÃO: inserirInicioLista
    DESCRIÇÃO: Insere um elemento na posição 0 e desloca os outros.
    PARAMETROS: 
        1 - lista: ponteiro para a struct da lista.
        2 - elemento: valor inteiro a ser inserido.
    RETORNO: Nenhum (void).
  =========================================================*/
void inserirInicioLista(TLista * const lista, int elemento);

/*=========================================================
    FUNÇÃO: inserirFimLista
    DESCRIÇÃO: Adiciona um elemento na última posição livre.
    PARAMETROS: 
        1 - lista: ponteiro para a struct da lista.
        2 - elemento: valor inteiro a ser inserido.
    RETORNO: Nenhum (void).
  =========================================================*/
void inserirFimLista(TLista * const lista, int elemento);

/*=========================================================
    FUNÇÃO: acessarInicioLista
    DESCRIÇÃO: Recupera o valor do primeiro elemento da lista (índice 0).
    PARAMETROS: 
        1 - lista: ponteiro constante para a struct da lista.
    RETORNO: O valor inteiro do início ou -1 se estiver vazia.
  =========================================================*/
int acessarInicioLista(TLista const * const lista);

/*=========================================================
    FUNÇÃO: acessarFimLista
    DESCRIÇÃO: Recupera o valor do último elemento inserido.
    PARAMETROS: 
        1 - lista: ponteiro constante para a struct da lista.
    RETORNO: O valor inteiro do fim ou -1 se estiver vazia.
  =========================================================*/
int acessarFimLista(TLista const * const lista);

/*=========================================================
    FUNÇÃO: retirarInicioLista
    DESCRIÇÃO: Remove o primeiro elemento e desloca o restante para a esquerda.
    PARAMETROS: 
        1 - lista: ponteiro para a struct da lista.
    RETORNO: Nenhum (void).
  =========================================================*/
void retirarInicioLista(TLista * const lista);

/*=========================================================
    FUNÇÃO: retirarFimlista
    DESCRIÇÃO: Remove o último elemento da lista (decrementa ocupação).
    PARAMETROS: 
        1 - lista: ponteiro para a struct da lista.
    RETORNO: Nenhum (void).
  =========================================================*/
void retirarFimlista(TLista * const lista);

#endif