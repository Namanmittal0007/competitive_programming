//https://leetcode.com/problems/intersection-of-two-arrays/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int> a;
        sort(nums1.begin(),nums1.end());
        //nums1.erase(nums1.begin()+(i+1),nums1.end());
        //sort(nums2.begin(),nums2.end());
        for(int j=0;j<nums1.size();j++){
            if(j>0){if(nums1[j]==nums1[j-1]){
                continue;
            }}
            for(int x=0;x<nums2.size();x++){
                if(nums1[j]==nums2[x]){
                    a.push_back(nums1[j]);
                    break;
                }
            }
        }
        
        return a;
    }
};