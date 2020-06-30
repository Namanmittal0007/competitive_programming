//https://leetcode.com/problems/reverse-bits/
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> a(n);
        bitset<32> b;
        for(int i=0;i<32;i++){
            b[i]=a[31-i];
        }
        uint32_t result=(uint32_t)b.to_ulong();
        return result;
    }
};