//https://leetcode.com/problems/binary-watch/
class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> result;
        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                if(__builtin_popcount(i)+__builtin_popcount(j)==num){
                    string s;
                    if(j<10)
                        s=to_string(i)+":0"+to_string(j);
                    else
                        s=to_string(i)+':'+to_string(j);
                    result.push_back(s);
                }
            }
        }
        return result;
    }
};