#define MAX(a,b) (((a)>(b))?(a):(b))

int solve(int *arr, int *memo, int idx, int jump, int arrSize){
    if(idx>=arrSize || idx<0) return -666;
    if(memo[idx]!=0) return memo[idx];
    int ward1=0, ward2=0;
    int resposta = 1;
    for(int i=1; i<=jump; ++i){
        if(!(idx+i>=arrSize)){
          if(arr[idx+i]>=arr[idx])
            ward1 = 1;
        }
        if(!(idx-i<0)){
          if(arr[idx-i]>=arr[idx])
            ward2 = 1;
        }
        if(ward1==0)
        resposta = MAX(resposta, 1+solve(arr, memo, i+idx, jump, arrSize));
        if(ward2==0)
        resposta = MAX(resposta, 1+solve(arr, memo, idx-i, jump, arrSize));
    }
    memo[idx] = resposta;
    return resposta;

}

int maxJumps(int* arr, int arrSize, int d) {
  int *memo = (int*) calloc(1006, sizeof(int));
  int resposta = 1;

  for(int i=0; i<arrSize; ++i)
    resposta = MAX(resposta, solve(arr, memo, i, d, arrSize));

  return resposta;
}