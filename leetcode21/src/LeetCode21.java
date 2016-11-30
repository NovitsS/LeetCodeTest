/**
 * Created by HUSTy on 2016/11/30.
 */
public class LeetCode21 {
    public static void main(String[] args){
        int [][] num={{1,2,3},{3,4,5},{5,6,7}};
        Solution solution=new Solution();
        solution.rotate(num);
    }
}
class  Solution{
    public void rotate(int[][] matrix) {
        int n = matrix.length;
        if (n == 0) return;

        for (int i = 0; i < n>>1; i++) {
            for (int j = i; j < n-i-1; j++) {
                int temp = matrix[n-j-1][i];
                matrix[n-j-1][i] = matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1] = matrix[j][n-i-1];
                matrix[j][n-i-1] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
    }
}
