//https://leetcode.com/problems/first-bad-version/submissions/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(isBadVersion(1)){
            return 1;
        }
        int s=1,e=n;
        while(s<e){
            int mid=s+(e-s)/2;
            if(!isBadVersion(mid)){
                s=mid+1;
            }
            else{
                e=mid;
            }
        }
        return s;
    }
};