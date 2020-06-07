class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<int> x;
        vector<vector<int>> a;
        for(int i=0;i<A.size();i++){
            int s=0,d=A[i].size()-1;
            while(s<=d){
                if(s!=d){
                    if(A[i][s]==A[i][d]){
                        A[i][s]=1-A[i][s];
                        A[i][d]=1-A[i][d];}
                }
                else{
                    if(A[i][s]==A[i][d]){
                        A[i][s]=1-A[i][s];
                    }
                }
                s++;
                d--;
            }
        }
        a=A;
        return a;
    }
};