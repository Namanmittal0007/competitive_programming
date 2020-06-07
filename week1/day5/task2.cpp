//https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> x;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
               x.push_back(matrix[i][j]); 
            }
        }
        sort(x.begin(),x.end());
        return x[k-1];
    }
};