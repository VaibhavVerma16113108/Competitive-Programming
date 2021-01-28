class Solution {
    public int[][] flipAndInvertImage(int[][] A) {
        for (int i = 0; i < A.length; i++) {
            for (int j = 0; j * 2 < A[0].length; j++) {
                // reverse each row
                int temp = A[i][j] ^ 1;
                A[i][j] = A[i][A[0].length - 1 - j] ^ 1;
                A[i][A[0].length - 1 - j] = temp;
            }
        }
        return A;
    }
}