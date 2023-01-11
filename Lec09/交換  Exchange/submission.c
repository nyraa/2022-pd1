void solve(int *A, int *B, int *op_cnt){
    for(int i = 0; i < N; ++i)
    {
        if(A[i] < B[i])
        {
            A[i] = B[i];
            ++(*op_cnt);
        }
    }
            
}