# 👻 Foge-Foge (Clone do Pac-Man) em C

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![Terminal](https://img.shields.io/badge/Terminal-%234D4D4D.svg?style=for-the-badge&logo=gnu-bash&logoColor=white)

Um jogo de labirinto desenvolvido via terminal, inspirado no clássico Pac-Man. Este é um projeto avançado que consolida conceitos complexos da linguagem C, como alocação dinâmica de memória, uso intensivo de ponteiros e arquitetura de múltiplos arquivos.

## ✨ Funcionalidades em Destaque

* **Inteligência Artificial Simples:** Os fantasmas se movem de forma autônoma pelo mapa a cada rodada, verificando os limites das paredes e os caminhos válidos.
* **Habilidade Especial (Recursão):** Ao coletar uma pílula de poder (`P`), o herói pode acionar uma bomba (`b`) que destrói obstáculos em um raio de 3 casas usando uma função recursiva.
* **Renderização Visual Customizada:** O mapa é lido de um arquivo `.txt`, e os caracteres simples são transformados em sprites ASCII Art de 4 linhas no terminal (desenhados em `ui.c`).
* **Arquitetura Modular:** Separação clara de responsabilidades entre Interface de Usuário (`ui.h`), Lógica de Mapa (`mapa.h`) e Lógica de Jogo (`fogefoge.h`).

## 🛠️ Tecnologias e Conceitos Aplicados

* **Linguagem C**
* **Alocação Dinâmica de Memória:** Uso de `malloc` e `free` para instanciar a matriz do mapa no tamanho exato lido do arquivo.
* **Estruturas de Dados:** Uso de `structs` e `typedef` para orientar objetos no jogo (Mapa e Posição).
* **Ponteiros e Passagem por Referência.**
* **Algoritmos Recursivos.**

## 🚀 Como executar o projeto na sua máquina

Certifique-se de ter todos os arquivos (`.c`, `.h` e o `mapa.txt`) no mesmo diretório.

**1. Clone o repositório:**
`git clone https://github.com/sid-neyz/jogo-fogefoge.git`

**2. Acesse a pasta do projeto:**
`cd jogo-fogefoge`

**3. Compile o código-fonte:**
Como o projeto é dividido em múltiplos arquivos, você precisa compilar todos os `.c` juntos:
`gcc fogefoge.c mapa.c ui.c -o fogefoge`

**4. Execute o jogo:**
* **Linux / macOS:** `./fogefoge`
* **Windows:** `fogefoge.exe`

*(Use as teclas W, A, S, D para mover e B para soltar a bomba).*

---
