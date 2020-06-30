//https://leetcode.com/problems/subsets/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> a;
        int n=1<<nums.size();
        for(int i=0;i<n;i++){
            int num=i;
            vector<int> aa;
            int j=0;
            while(num>0){
                if(num&1){
                    aa.push_back(nums[j]);
                }
                j++;
                num=num>>1;
            }
            a.push_back(aa);
        }
        return a;
    }
};