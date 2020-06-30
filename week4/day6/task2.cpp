//https://leetcode.com/problems/number-of-1-bits/submissions/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result;
        result=__builtin_popcount(n);
        return result;
    }
};