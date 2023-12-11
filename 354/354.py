class Solution:
    def maxEnvelopes(self, envelopes: List[List[int]]) -> int:
        
        envelopes =  sorted(envelopes, key=lambda x: (x[0], -x[1])) # Ordenando primeiro por largura, depois por altura
        
        MSC = 0     # Inicializa o tamanho da maior subsequencia
        # Inicializando o vetor de predecessor
        n = len(envelopes)
        pre = [0]*n
        
        # Calculando as maiores subsequencias
        # Percorre o vetor pela altura e realiza uma busca biaria para encontrar altura ideal
        for _, altura in envelopes:
            e, d = 0, MSC
            while e < d:
                m = (e+d)//2
                if(pre[m] >= altura): # Checando se altura eh menor que a do meio
                    d = m
                else:
                    e = m + 1

            pre[e] = altura # Atualizando o predecessor da altura
            if e == MSC:    # Atualizando o tamanho da subsequencia
                MSC += 1

        return MSC
