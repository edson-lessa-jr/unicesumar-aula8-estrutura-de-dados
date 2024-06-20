#include "matriz-grafo.h"

// Função para inicializar a matriz de adjacência
void inicializarMatrizG(int matriz[NUM_VERTICES][NUM_VERTICES]) {
    for (int i = 0; i < NUM_VERTICES; i++) { // Itera sobre as linhas da matriz
        for (int j = 0; j < NUM_VERTICES; j++) { // Itera sobre as colunas da matriz
            matriz[i][j] = 0; // Inicializa cada entrada da matriz com 0 (sem aresta)
        }
    }
}

// Função para adicionar uma aresta ao grafo
void adicionarArestaG(int matriz[NUM_VERTICES][NUM_VERTICES], int origem, int destino) {
    matriz[origem][destino] = 1; // Define a entrada (origem, destino) como 1 (existe uma aresta)
    matriz[destino][origem] = 1; // Para grafos não direcionados, adiciona também a aresta oposta
}

// Função para exibir a matriz de adjacência
void exibirMatrizG(int matriz[NUM_VERTICES][NUM_VERTICES]) {
    for (int i = 0; i < NUM_VERTICES; i++) { // Itera sobre as linhas da matriz
        for (int j = 0; j < NUM_VERTICES; j++) { // Itera sobre as colunas da matriz
            printf("%d ", matriz[i][j]); // Imprime o valor da entrada da matriz
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }
}

int matrizGrafo() {
    int matriz[NUM_VERTICES][NUM_VERTICES]; // Declara a matriz de adjacência
    inicializarMatrizG(matriz); // Chama a função para inicializar a matriz

    // Adiciona algumas arestas ao grafo
    adicionarArestaG(matriz, 0, 1);
    adicionarArestaG(matriz, 0, 4);
    adicionarArestaG(matriz, 1, 2);
    adicionarArestaG(matriz, 1, 3);
    adicionarArestaG(matriz, 1, 4);
    adicionarArestaG(matriz, 2, 3);
    adicionarArestaG(matriz, 3, 4);

    // Exibe a matriz de adjacência
    printf("Matriz de Adjacência:\n");
    exibirMatrizG(matriz);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
