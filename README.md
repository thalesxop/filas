# Projeto: Lista Sequencial Dinâmica em C

Este projeto consiste na implementação de uma estrutura de dados do tipo Lista Sequencial utilizando alocação dinâmica de memória. O sistema permite o gerenciamento de um array de inteiros com redimensionamento inicial definido pelo usuário e suporte a operações em qualquer posição da estrutura.

## Conteúdo do Projeto

O sistema está dividido em três arquivos para garantir a modularidade:

1. lista.h: Definição da estrutura TLista e protótipos das funções.
2. lista.c: Implementação da lógica de manipulação de dados e deslocamento de vetores.
3. main.c: Interface de linha de comando para interação com o usuário.

---

## Funcionalidades Implementadas

### Operações de Início

* Inserir no Início: Desloca todos os elementos uma posição à direita para inserir um novo valor no índice 0.
* Acessar Início: Consulta o primeiro elemento da lista.
* Retirar do Início: Remove o primeiro elemento e desloca os sucessores para preencher o espaço.

### Operações de Fim

* Inserir no Fim: Adiciona o elemento diretamente na próxima posição vaga (índice de ocupação).
* Acessar Fim: Consulta o último elemento válido inserido.
* Retirar do Fim: Realiza a remoção lógica decrementando o contador de ocupação.

### Operações por Posição Específica

* Inserir na Posição: Permite a inserção em qualquer índice válido, realizando o deslocamento dos elementos posteriores.
* Acessar na Posição: Retorna o valor de um índice específico, validando os limites da lista.
* Retirar na Posição: Remove um elemento de qualquer ponto da lista e reorganiza o array para manter a integridade sequencial.

### Gestão de Memória e Exibição

* Inicializar Lista: Aloca o bloco de memória necessário via malloc.
* Liberar Lista: Desaloca a memória e evita vazamentos (memory leaks).
* Mostrar Lista: Exibe o estado atual da coleção de dados.


## Autor

* Thales Xavier de Oliveira Pimenta
* Acadêmico de Ciência da Computação - PUC-GO