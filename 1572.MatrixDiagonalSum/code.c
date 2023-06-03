int diagonalSum(int** mat, int matSize, int* matColSize){
    int n = matSize - 1;
    int sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += mat[i][i];
        if (n - i != i) {
            sum += mat[i][n - i];
        }
    }
    return sum;
}
