# Exercicios5

**Número da Lista**: 5<br>
**Conteúdo da Disciplina**: Bellman Ford, Maior Subsequência e Weighted Interval Scheduling <br>

## Alunos

| Matrícula  | Aluno                       |
| ---------- | --------------------------- |
| 21/1029147 | Arthur de Melo Viana        |
| 21/1029666 | Matheus Henrique Dos Santos |

## Sobre

Exercícios resolvidos no Leetcode:

| Exercício                                                                                     | Juiz Online                       |           Autor da Resolução            |
| --------------------------------------------------------------------------------------------- | --------------------------------- | :-------------------------------------: |
| [1340 - Jump Game V](https://leetcode.com/problems/jump-game-v/)                              | [Leetcode](https://leetcode.com/) | [Arthur](https://github.com/arthurmlv)  |
| [1955 - Count Number of Special Subsequences](https://leetcode.com/problems/count-number-of-special-subsequences/)     | [Leetcode](https://leetcode.com/) | [Arthur](https://github.com/arthurmlv)  |
| [132 - Palindrome Partitioning II](https://leetcode.com/problems/palindrome-partitioning-ii/) | [Leetcode](https://leetcode.com/) | [Matheus](https://github.com/mathonaut) |
| [174 - Dungeon Game](https://leetcode.com/problems/dungeon-game/)                             | [Leetcode](https://leetcode.com/) | [Matheus](https://github.com/mathonaut) |

## Screenshots

As seções a seguir explicitam os exercícios resolvidos e apresentam uma breve explicação das resoluções. É possível observar o status de conclusão do problema e uma descrição do algoritmo utilizado. A dificuldade dos exercícios do leetcode é dada de forma explícita na página do problema.

### 1340 - Jump Game V (Hard)

Para resolver este exercício, fez-se o uso de um vetor memoization e da lógica de escolher o maior valor possível. Portanto, deve-se considerar cada posição no vetor, e se tal posição será escolhida ou não na solução final, com base no maior valor entre a escolha e a não-escolha. Como cada pulo acresce 1 da resposta, a escolha é sempre `1 + outros pulos`, e a não-escolha é o valor atual.

![Imagem jump5](assets/jump5enun.png)
![Imagem jump5ac](assets/jump5.png)

### 1955 - Count Number of Special Subsequences (Hard)

A resolução deste exercício foi feita pela luz da lógica do algorítmo de maior subsequência crescente. Para tal, deve-se analisar todas as subsequências crescentes em um vetor que possui apenas os números 0, 1 e 2. No entanto, utilizou-se de uma matriz 2D para guardar o resultado da quantidade de subsequências para cada índice e valor. Desta forma, caso já exista uma resposta, o cálculo que já foi feito é reutilizado nas demais chamadas recursivas.

![Imagem 1955](assets/1955enun.png)
![Imagem 1955ac](assets/1955.png)

### 132 - Palindrome Partitioning II

Para se resolver este exercício, foi utilizado a lógica do algoritmo da agendamento de intervalos com pesos. Foi utilizado um função para tratar o memoization e chamadas recursivas para se determinar a quantidade necessária de cortes de uma string dada para se formar um palíndromo. A solução é encontrada percorrendo toda a string e realizando cortes com o auxílio da técnica de memoization, tentando sempre em minimizar a quantidade de corte.

![Imagem do enunciado do problema 132 Palindrome Partitioning II](assets/132/enunciado132.png)
![Imagem da solução aceita para o problema 132](assets/132/132.png)

### 174 - Dungeon Game

Para se resolver este exercício, foi utilizado a lógica do algoritmo de menor caminho (_Bellman-Ford_). A solução foi alcançada seguindo um processo semelhante ao algoritmo original, porém sem a exigência da matriz de sucessores. Essa solução utilizou uma travessia inversa da matriz, mantendo, a busca pelo caminho de menor custo, no caso, menor vida inicial.

![Imagem do enunciado do problema 174 Dungeon Game](assets/174/enunciado174.png)
![Imagem da solução aceita para o problema 174](assets/174/174.png)

## Instalação

**Linguagens**: C e Python<br>

Para rodar os arquivos em C, é recomendado utilizar o WSL caso esteja no Windows. Nele, execute os comandos `sudo apt update` e `sudo apt install build-essential` para instalar o gcc. O código em C também pode ser enviado no próprio [Leetcode](https://leetcode.com/) ou compilado e executado no [Ideone](https://ideone.com/).

Já para rodar os arquivos em Python, pode ser utilizado o interpretador online [GDB](https://www.onlinegdb.com/) ou instalar o Python na sua máquina (as instruções para instalação podem ser encontradas no [guia de instalação](https://wiki.python.org/moin/BeginnersGuide/Download)).

## Uso

Para os códigos em C, compile o código utilizando `gcc -o prog arquivo.c` e execute-o utilizando `./prog`, por fim, digite o input no terminal. Também pode ser utilizado o comando `./prog < entrada.txt` caso exista algum caso de teste válido no arquivo de texto. Os links para os problemas resolvidos estão na seção "Sobre", onde podem ser enviados para verificar se foram aceitos.

Para os códigos em Python, basta digitar `python nome-do-arquivo.py` no terminal de preferência para rodar o código com os casos de testes dados como exemplo. Da mesma forma, a solução pode ser enviada na própria página do problema.

## Vídeo

Para acessar o vídeo explicativo sobre os exercícios, [clique aqui](https://www.youtube.com/embed/).

Para baixar o vídeo, [clique aqui](apresentacao.mp4).
