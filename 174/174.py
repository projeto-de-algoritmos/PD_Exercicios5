import math


class Solution:
    def calculateMinimumHP(self, dungeon: List[List[int]]) -> int:
        # Pegando qtd de linhas e colunas.
        linhas = len(dungeon)
        colunas = len(dungeon[0])

        M = [[math.inf for _ in range(colunas+1)] for _ in range(linhas+1)] # Incializando a matriz de custos.
        # Marcando os menores valores para a pos. terminal.
        M[linhas][colunas-1] = 1
        M[linhas-1][colunas] = 1

        for i in reversed(range(linhas)):
            for j in reversed(range(colunas)):
                menorVida = min(M[i+1][j], M[i][j+1]) - dungeon[i][j]
                if menorVida<1:
                    M[i][j] = 1
                else:
                    M[i][j] = menorVida

        
        return M[0][0]
