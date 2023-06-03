public class Solution {
    public int DiagonalSum(int[][] mat) {
        int n = mat.GetLength(0) - 1;
        int sum = 0;

        for (int i = 0; i <= n; i++) {
            sum += mat[i][i];
            if (n - i != i) {
                sum += mat[i][n - i];
            }
        }
        return sum;
    }
}
