#include "01-matriz-adjacencia.h"

// Função para inicializar a matriz de adjacência
void inicializaMatrizAdj(int grafo[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            grafo[i][j] = 0; // Inicializa a matriz com zeros
        }
    }
}

// Função para adicionar uma aresta em um grafo não direcionado
void adicionaArestaAdj(int grafo[V][V], int origem, int destino) {
    grafo[origem][destino] = 1;
    grafo[destino][origem] = 1; // Para grafo não direcionado
}

// Função para imprimir a matriz de adjacência
void imprimeMatrizAdj(int grafo[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", grafo[i][j]);
        }
        printf("\n");
    }
}

int matrizAdjacente() {
    int grafo[V][V];

    inicializaMatrizAdj(grafo);

    adicionaArestaAdj(grafo, 0, 1);
    adicionaArestaAdj(grafo, 0, 2);
    adicionaArestaAdj(grafo, 1, 2);
    adicionaArestaAdj(grafo, 2, 3);

    printf("Matriz de Adjacência:\n");
    imprimeMatrizAdj(grafo);

    return 0;
}
