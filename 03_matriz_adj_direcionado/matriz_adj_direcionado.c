#include "matriz_adj_direcionado.h"

// Função para inicializar a matriz de adjacência
void inicializaMatrizDir(int grafo[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            grafo[i][j] = 0; // Inicializa a matriz com zeros
        }
    }
}

// Função para adicionar uma aresta em um grafo direcionado
void adicionaArestaDir(int grafo[V][V], int origem, int destino) {
    grafo[origem][destino] = 1; // Apenas origem para destino, pois é direcionado
}

// Função para imprimir a matriz de adjacência
void imprimeMatrizDir(int grafo[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", grafo[i][j]);
        }
        printf("\n");
    }
}

int matrizAdjDirecionado() {
    int grafo[V][V];

    inicializaMatrizDir(grafo);

    adicionaArestaDir(grafo, 0, 1);
    adicionaArestaDir(grafo, 0, 2);
    adicionaArestaDir(grafo, 1, 2);
    adicionaArestaDir(grafo, 2, 3);

    printf("Matriz de Adjacência:\n");
    imprimeMatrizDir(grafo);

    return 0;
}
