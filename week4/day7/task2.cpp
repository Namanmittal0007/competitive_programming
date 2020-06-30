//https://leetcode.com/problems/counting-bits/
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for(int i=0;i<=num;i++){
            if((i&1)==0 and i<num){
                bitset<64> a(i);
                result.push_back(a.count());
                result.push_back(a.count()+1);
                i++;
                continue;
            }
            bitset<64> a(i);
            result.push_back(a.count());
        }
        return result;
    }
};