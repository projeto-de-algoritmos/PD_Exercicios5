#define MOD 1000000007
#define ll long long int

ll solve(int *nums, ll **memo, int curr, int idx, int s){
    if(memo[idx][curr+1]!=-666) return memo[idx][curr+1];
    if(idx==s){
        if(curr==2) return 1;
        else return 0;
    }

    long long resposta = 0;
    // varre o vetor nums em busca de sequencias
    if(nums[idx]==curr)
        resposta += solve(nums, memo, curr, idx+1, s); // sequencia que repete o valor atual
    if(nums[idx]==curr+1)
        resposta += solve(nums, memo, curr+1, idx+1, s); // sequencia que aumenta o valor em 1
    
    resposta += solve(nums, memo, curr, idx+1, s); // varre o proximo indice com o valor atual
    
    memo[idx][curr+1] = resposta % MOD;
    return resposta % MOD;
}

int countSpecialSubsequences(int* nums, int numsSize) {
    ll* memo[numsSize+6];
    for (int i=0; i<numsSize+6; i++){  // inicializa matriz memoization 2D com malloc
        memo[i] = (ll*)malloc(4*sizeof(ll));
        for(int j=0; j<4; ++j)
            memo[i][j] = -666;
    }

    return solve(nums, memo, -1, 0, numsSize) % MOD; 
}