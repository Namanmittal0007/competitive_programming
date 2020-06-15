//https://leetcode.com/problems/spiral-matrix/submissions/
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> x(0,0);
        if(matrix.size()==0){
            return x;
        }
        int rstart=0,rend=matrix.size(),cstart=0,cend=matrix[0].size();
        while(rstart<rend and cstart<cend){
            for(int i=cstart;i<cend;i++){
                x.push_back(matrix[rstart][i]);
            }
            rstart++;
            for(int i=rstart;i<rend;i++){
                x.push_back(matrix[i][cend-1]);
            }
            cend--;
            if(rstart<rend){
                for(int i=cend-1;i>=cstart;i--){
                    x.push_back(matrix[rend-1][i]);
                }
            }
            rend--;
            if(cstart<cend){
                for(int i=rend-1;i>=rstart;i--){
                    x.push_back(matrix[i][cstart]);
                }
            }
            cstart++;
        }
        return x;
    }
};