//https://leetcode.com/problems/spiral-matrix-ii/submissions/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> x(n,vector<int> (n,0));
        int sr=0,er=n,sc=0,ec=n,a=1;
        while(sr<er and sc<ec){
            for(int i=sc;i<ec;i++){
                x[sr][i]=a++;
            }
            sr++;
            for(int i=sr;i<er;i++){
                x[i][ec-1]=a++;
            }
            ec--;
            if(sr<er){
                for(int i=ec-1;i>=sc;i--){
                    x[er-1][i]=a++;
                }
            }
            er--;
            if(sc<ec){
                for(int i=er-1;i>=sr;i--){
                    x[i][sc]=a++;
                }
            }
            sc++;
        }
        return x;
    }
};