//https://leetcode.com/problems/single-number-ii/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0,arr[32]={0};
        for(int i=0;i<nums.size();i++){
            int num=nums[i],j=0;
            while(num>0){
                arr[j++]+=(num&1);
                num=num>>1;
            }
        }
        int pow=0;
        for(int i=0;i<32;i++,pow++){
            arr[i]%=3;
            ans+=arr[i]<<pow;
        }
        return ans;
    }
};