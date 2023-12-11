#define ll long long int
#define MAX(a,b) (((a)>(b))?(a):(b))

ll solve(int *nums1, int *nums2, int ***memo, int a, int b){
    if(a<0 || b<0) return INT_MIN;
    if (memo[a][b]!=-666) return memo[a][b];

    ll valAB, others, curr;

    valAB = MAX(solve(nums1, nums2, memo, a, b-1), solve(nums1, nums2, memo, a-1, b)); // percorre A e B com os outros valores 

    others = solve(nums1, nums2, memo, a-1, b-1); // percorre os outros valores

    curr = MAX(nums1[a]*nums2[b], nums1[a]*nums2[b]+others); // levar ou nao levar os outros

    memo[a][b] = MAX(curr, MAX(valAB, others));

    return memo[a][b];
}

int maxDotProduct(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int s1 = nums1Size-1, s2 = nums2Size-1;
    
    ll* memo[s1+6];
    for (int i=0; i<s1+6; i++){  // inicializa matriz memoization 2D com malloc
        memo[i] = (ll*)malloc((s2+6)*sizeof(ll));
        for(int j=0; j<s2+6; ++j)
            memo[i][j] = -666;
    }

    return solve(nums1, nums2, memo, s1, s2);
}