class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
       int m=0;
       int e=n-1;
       while(m<e){

            for(int j=0;j<n;j++){
                swap(matrix[m][j],matrix[e][j]);
            }
            m++;
            e--;
        }
        // transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
              swap(matrix[i][j],matrix[j][i]);
            }
        }
       
    }
};
