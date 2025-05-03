class Solution {
public:
    void reve(vector<vector<int>>& matrix, int i){
        int n=matrix.size();
        for(int j=0;j<n/2;j++){
            swap(matrix[i][j],matrix[i][n-j-1]);
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n =matrix.size();
        vector<vector<int>> v(n, vector < int > (n, 0));
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reve(matrix,i);
        }
    }
};