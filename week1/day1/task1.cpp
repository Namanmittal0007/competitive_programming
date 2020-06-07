//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                return vector<int> {i+1,j+1};
            }
            else if(target>numbers[i]+numbers[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return vector<int> {0,0};
    }
};