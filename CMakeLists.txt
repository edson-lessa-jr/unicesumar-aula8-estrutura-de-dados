cmake_minimum_required(VERSION 3.28)
project(unicesumar_aula8_estrutura_dados C)

set(CMAKE_C_STANDARD 11)


add_executable(unicesumar_aula8_estrutura_dados main.c
        "01_matriz_adjacencia/01-matriz-adjacencia.h"
        01_matriz_adjacencia/01-matriz-adjacencia.c
        02_matriz_adj_nao_direcionado/matriz_adj_nao_direcionado.h
        02_matriz_adj_nao_direcionado/matriz_adj_nao_direcionado.c
        03_matriz_adj_direcionado/matriz_adj_direcionado.c
        03_matriz_adj_direcionado/matriz_adj_direcionado.h
        04_matriz_grafo/matriz-grafo.c
        04_matriz_grafo/matriz-grafo.h)
