# Batalha Naval 🛳️⚓️

## O que é o programa?
É um programa em C que recebe um histórico completo de um confronto marítimo referente a uma matriz com dimensões 10 × 10 e identifica o resultado da batalha. 🌊🏴‍☠️
## Descrição da Entrada

### 1. Número de navios do exército Algoritmista 🤖
A primeira linha contém um único inteiro **N**, que indica a quantidade de navios que o exército Algoritmista possui.

### 2. Descrição dos navios do exército Algoritmista 🚢
Para cada um dos **N** navios, seguem **N** linhas que descrevem cada navio da seguinte forma:

- O tamanho do navio **T** (um número entre 1 e 5).
- A orientação do navio **o**: pode ser `h` para horizontal ou `v` para vertical.
- As coordenadas da ponta do navio, com a linha representada por **x** e a coluna por **y** (por exemplo, `32` significa linha 3 e coluna 2).

**Exemplo**:
- A entrada `5h32` indica um navio de tamanho 5, orientado horizontalmente, com a ponta localizada na linha 3 e coluna 2. Esse navio ocupará as células da linha 3, indo da coluna 2 até a coluna 6 (crescendo para a direita).
- A entrada `4v62` indica um navio de tamanho 4, orientado verticalmente, com a ponta localizada na linha 6 e coluna 2. Esse navio ocupará as células da coluna 2, indo da linha 6 até a linha 9 (crescendo para baixo).

### 3. Número de navios do exército Estruturista 🏗️
Após a descrição dos navios do exército Algoritmista, há uma nova linha contendo um inteiro **M**, que indica a quantidade de navios do exército Estruturista.

### 4. Descrição dos navios do exército Estruturista ⚓️
A seguir, seguem **M** linhas que descrevem cada navio do exército Estruturista no mesmo formato utilizado para o exército Algoritmista:

- Tamanho do navio **T**.
- Orientação **o** (`h` para horizontal ou `v` para vertical).
- Coordenadas da ponta do navio **(x, y)**.

### 5. Número de ataques 💥
Após as descrições dos navios dos dois exércitos, há uma nova linha contendo um único inteiro **A**, que representa a quantidade total de ataques que ocorrerão na batalha.

### 6. Descrição dos ataques 🚀
Seguem **A** linhas, uma para cada ataque, e os ataques são realizados alternadamente entre os dois exércitos, começando pelos Algoritmistas. Cada linha de ataque tem o seguinte formato:

- O primeiro elemento é um caractere **c**, que indica o tipo de ataque:
  - `n` para um ataque normal.
  - `e` para um ataque especial.

- Se o ataque for normal (`c == n`), seguem dois inteiros **x** e **y**, que indicam a linha e a coluna da célula atacada.

- Se o ataque for especial (`c == e`), seguem um caractere e um inteiro:
  - O caractere pode ser `v` (vertical) ou `h` (horizontal), indicando a direção do ataque.
  - O inteiro **x** indica a linha (se for ataque horizontal) ou a coluna (se for ataque vertical) a ser atacada.

## Restrições 📏

- **1 ≤ N, M ≤ 20**: O número de navios dos dois exércitos é limitado a 20.
- **1 ≤ T ≤ 5**: O tamanho de cada navio é limitado a um valor entre 1 e 5.
## Descrição da Saída 📊

A saída consiste de três partes:

1. **Matriz dos navios Algoritmistas**: Apresentada como uma grade onde cada célula representa uma posição no tabuleiro.
2. **Linha em branco**: Uma linha em branco separando as duas matrizes.
3. **Matriz dos navios Estruturistas**: Apresentada de forma semelhante à matriz dos Algoritmistas.
4. **Linha em branco**: Outra linha em branco.
5. **Resultado da batalha**: Um inteiro **S** que indica o resultado do confronto:
   - **0**: Empate
   - **1**: Vitória dos Algoritmistas
   - **2**: Vitória dos Estruturistas

### Formato da Matriz 🗺️

As matrizes são impressas conforme o exemplo abaixo:

|     | **0** | **1** | **2** | **3** | **4** | **5** | **6** | **7** | **8** | **9** |
|-----|-------|-------|-------|-------|-------|-------|-------|-------|-------|-------|
| **0** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |
| **1** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |
| **2** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |
| **3** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |
| **4** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |
| **5** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |
| **6** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |
| **7** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |
| **8** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |
| **9** |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |   0   |


## Rodando os testes 🧪
### Exemplo de Entrada

```bash
4  
3 h 6 9    
5 v 2 5  
4 v 1 1  
1 h 8 2  
4   
4 v 5 0  
5 v 3 6  
3 h 3 2  
5 v 1 9  
20  
n 1 3  
n 6 0  
n 5 3  
n 6 1  
n 3 2  
e h 6  
n 3 3  
n 4 1  
n 3 4  
n 3 1  
n 3 5  
e h 1  
n 8 2  
n 2 5  
n 5 0  
n 8 2  
n 4 0  
e v 5  
n 3 0  
n 2 1 
```

### Exemplo de Saída


```bash
|   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|---|---|---|---|---|---|---|---|---|---|---|
| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 2 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 3 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 4 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 5 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 6 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 7 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 8 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 9 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |


|   | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|---|---|---|---|---|---|---|---|---|---|---|
| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |
| 2 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 |
| 3 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |
| 4 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |
| 5 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 |
| 6 | 1 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 |
| 7 | 1 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 0 |
| 8 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| 9 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |

2
```
![Logo](https://camo.githubusercontent.com/83be2182efa7e9f3391849a13396145a9cb20358873c6e074b22ca8e6dbef3ca/68747470733a2f2f7777772e75666d672e62722f6f6e6c696e652f6172717569766f732f616e65786f732f32303039313231365f6c6f676f5f75666d672e706e67)

