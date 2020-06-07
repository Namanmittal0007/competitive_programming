//https://leetcode.com/problems/find-lucky-integer-in-an-array/
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ret=-1;
        int a[501]={0};
        for(int i=0;i<arr.size();i++){
            a[arr[i]]++;
        }
        for(int i=500;i>0;i--){
            if(i==a[i]){
                ret=i;
                return ret;
            }
        }
        return ret;
    }
};