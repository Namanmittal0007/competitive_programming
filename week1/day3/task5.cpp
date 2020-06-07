//https://leetcode.com/problems/toeplitz-matrix/
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                int value=matrix[i][j];
                int x=i+1,y=j+1;
                while(x<matrix.size() and y<matrix[0].size()){
                    if(matrix[i][j]!=matrix[x][y]){
                        return false;
                    }
                    x++;
                    y++;
                }
            }
        }
        return true;
    }
};