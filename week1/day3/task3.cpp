//https://leetcode.com/problems/transpose-matrix/submissions/
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> x;
        for(int j=0;j<A[0].size();j++){
            vector<int> v;
            for(int i=0;i<A.size();i++){
                v.push_back(A[i][j]);
            }
            x.push_back(v);
        }
        return x;
    }
};