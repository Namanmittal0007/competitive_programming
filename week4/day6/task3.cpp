//https://leetcode.com/problems/bitwise-and-of-numbers-range/submissions/
class Solution {
 int onesComplement(int n) 
{  
   int number_of_bits = floor(log2(n))+1; 
   return number_of_bits - 1; 
} 
    public:
    int rangeBitwiseAnd(int m, int n) {
        int result=m;
        if(m==0){
            return 0;
        }
        if(onesComplement(m)<onesComplement(n)){
            return 0;
        }
        if(m==n){
            return m;
        }
        for(long long i=m+1;i<=n;i++){
            result=result&i;
            if(i==2147483646)
                break;
        }
        return result;
    }
};class Solution {
 int onesComplement(int n) 
{  
   int number_of_bits = floor(log2(n))+1; 
   return number_of_bits - 1; 
} 
    public:
    int rangeBitwiseAnd(int m, int n) {
        int result=m;
        if(m==0){
            return 0;
        }
        if(onesComplement(m)<onesComplement(n)){
            return 0;
        }
        if(m==n){
            return m;
        }
        for(long long i=m+1;i<=n;i++){
            result=result&i;
            if(i==2147483646)
                break;
        }
        return result;
    }
};