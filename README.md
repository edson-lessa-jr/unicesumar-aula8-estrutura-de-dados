# Aula 8 — Estrutura de Dados (UniCesumar)

Repositório de apoio à disciplina de **Estrutura de Dados** em C, com foco em grafos e suas representações.

## Sobre

Este projeto apresenta implementações e exemplos de **grafos** utilizando diferentes formas de representação em linguagem C.  
O conteúdo está organizado por tópicos, cada um em seu próprio diretório, facilitando o estudo e a execução dos exemplos.

## Estrutura de Diretórios

```
.
├── 01_matriz_adjacencia
├── 02_lista_adjacencia
├── 03_matriz_adj_nao_direcionado
├── 04_matriz_adj_direcionado
├── 05_grafo
├── .gitignore
├── CMakeLists.txt
├── main.c
└── readme.md
```

### Descrição dos Diretórios

- **01_matriz_adjacencia:** Exemplo de implementação de grafo usando matriz de adjacência.
- **02_lista_adjacencia:** Exemplo de implementação de grafo usando lista de adjacência.
- **03_matriz_adj_nao_direcionado:** Implementação de matriz de adjacência para grafos não direcionados.
- **04_matriz_adj_direcionado:** Implementação de matriz de adjacência para grafos direcionados.
- **05_grafo:** Outros exemplos e variações de grafos.
- **main.c:** Arquivo principal para execução dos exemplos.
- **CMakeLists.txt:** Script para compilação do projeto com CMake.

## Como Compilar e Executar

1. Clone este repositório:
   ```sh
   git clone https://github.com/edson-lessa-jr/unicesumar-aula8-estrutura-de-dados.git
   ```
2. Entre na pasta do projeto:
   ```sh
   cd unicesumar-aula8-estrutura-de-dados
   ```
3. Compile utilizando o CMake ou diretamente pelo gcc:
   ```sh
   gcc -o main main.c
   ./main
   ```
   Ou utilize os arquivos de cada diretório conforme desejado.

## Temas Abordados

- Conceitos básicos de grafos
- Representação de grafos com matriz de adjacência (direcionado e não direcionado)
- Representação de grafos com lista de adjacência
- Implementação em linguagem C

## Autor

**Edson Orivaldo Lessa Junior**

---

**Este repositório é destinado ao uso didático na disciplina de Estrutura de Dados da UniCesumar.**
