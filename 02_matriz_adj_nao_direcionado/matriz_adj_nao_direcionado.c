#include "matriz_adj_nao_direcionado.h"

// Função para inicializar a matriz de adjacência
void inicializaMatrizNDri(int grafo[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            grafo[i][j] = 0; // Inicializa a matriz com zeros
        }
    }
}

// Função para adicionar uma aresta em um grafo não direcionado
void adicionaArestaNDri(int grafo[V][V], int origem, int destino) {
    grafo[origem][destino] = 1;
    grafo[destino][origem] = 1; // Para grafo não direcionado
}

// Função para imprimir a matriz de adjacência
void imprimeMatrizNDri(int grafo[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", grafo[i][j]);
        }
        printf("\n");
    }
}

int matrizAdjNaoDirecionado() {
    int grafo[V][V];

    inicializaMatrizNDri(grafo);

    adicionaArestaNDri(grafo, 0, 1);
    adicionaArestaNDri(grafo, 0, 2);
    adicionaArestaNDri(grafo, 1, 2);
    adicionaArestaNDri(grafo, 2, 3);

    printf("Matriz de Adjacência:\n");
    imprimeMatrizNDri(grafo);

    return 0;
}


