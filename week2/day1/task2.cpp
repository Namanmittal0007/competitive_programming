//https://leetcode.com/problems/self-dividing-numbers
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> x;
        for(int i=left;i<=right;i++){
            int a=i;
            bool cond=true;
            while(a>0){
                if((a%10)==0){
                    cond=false;
                    break;
                }
                else if(i%(a%10)!=0){
                    cond=false;
                    break;
                }
                a/=10;
            }
            if(cond){
                x.push_back(i);
            }
        }
        return x;
    }
};