#include <stdio.h>
#include "01_matriz_adjacencia/01-matriz-adjacencia.h"
#include "02_matriz_adj_nao_direcionado/matriz_adj_nao_direcionado.h"
#include "03_matriz_adj_direcionado/matriz_adj_direcionado.h"
#include "04_matriz_grafo/matriz-grafo.h"

int matrizAdjNaoDirecionado(void) {
    int opcao;

    printf("Iniciando o programa\n");

    do {
        // Exibindo o menu de opções
        printf("\nMenu:\n");
        printf("1. Exemplo Matriz Adjacente\n");
        printf("2. Exemplo Matriz Adjacente Não Direcionado\n");
        printf("2. Exemplo Matriz Adjacente Direcionado\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verificando a opção escolhida e chamando a função correspondente
        switch (opcao) {
            case 1:
                matrizAdjacente();
                break;
            case 2:
                matrizAdjNaoDirecionado();
                break;
            case 3:
                matrizAdjDirecionado();
                break;
            case 4:
                matrizGrafo();
                break;
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }
    } while (opcao != 0);

    return 0;
}
