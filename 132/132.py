class Solution:
    def minCut(self, s: str) -> int:
        @lru_cache(None) # Funcao do python para tratar as chamadas recursiva com memoization.
        def OPT(inicio, fim):
            # Checando o caso onde nao eh necessario cortar.
            if M[inicio][fim]:
                return 0
            
            # Checando os cortes, caso nao.
            sol = 2001
            for i in range(inicio, fim):
                if M[inicio][i]:
                    sol = min(sol, 1+OPT(i+1, fim))

            return sol

        n = len(s) # Tamanho string.
        # Vetor que guarda os possiveis palindromos.
        M = [[False] * n for _ in range(n)]

        for i in range(n-1, -1, -1):
            for j in range(i, n):
                if s[i] == s[j]:
                    # Calculando todos os possiveis palindromo.
                    M[i][j] = j - i <= 2 or M[i+1][j-1]

        return OPT(0, n-1)
