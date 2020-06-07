//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> x;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    count++;
                }
            }
            x.push_back(count);
        }
        return x;
    }
};