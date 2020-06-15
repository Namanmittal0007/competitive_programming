//https://leetcode.com/problems/defanging-an-ip-address/submissions/
class Solution {
public:
    string defangIPaddr(string address) {
        string x;
        for(int i=0;i<address.length();i++){
            if(address[i]=='.')
                x+="[.]";
            else
                x+=address[i];
        }
        return x;
    }
};