//https://leetcode.com/problems/longest-common-prefix/submissions/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0){
            return "";
        }
        string s=strs[0];
        for(int i=1;i<strs.size();i++){
            for(int j=0;j<s.size();j++){
                if(strs[i][j]!=s[j]){
                    s.erase(s.begin()+j,s.end());
                }
            }
        }
        return s;
    }
};