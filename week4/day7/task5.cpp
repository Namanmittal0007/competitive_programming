//https://leetcode.com/problems/single-number-iii/
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result;
        int res=0,a=0,b=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        //cout<<res;
        int pos=0,temp=res;
        while((temp&1)==0){
            pos++;
            temp=temp>>1;
        }
        int mask=1<<pos;
        for(int i=0;i<nums.size();i++){
            if((nums[i]&mask)>0){
                a=a^nums[i];
            }
        }
        b=res^a;
        result.push_back(min(a,b));
        result.push_back(max(a,b));
        return result;
    }
};