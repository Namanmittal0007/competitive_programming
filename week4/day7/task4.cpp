//https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size()-1;i++){
            int xoor=arr[i];
            for(int j=i+1;j<arr.size();j++){
                if(xoor==arr[j]){
                    count+=j-i;
                }
                xoor^=arr[j];
            }
        }
        return count;
    }
};