//https://leetcode.com/problems/permutation-in-string/submissions/
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            cout<<"hey1";
            return false;
        }
        int count[26]={0};
        for(int i=0;i<s1.length();i++){
            count[s1[i]-'a']++;
            
        }
        int start=0;
        for(int i=0;i<s1.length();i++){
            count[s2[i]-'a']--;
        }
        bool result = true;
        for(int c:count){
            if(c!=0){
                result=false;
                break;
            }
        }
        if(result){ 
            cout<<"hey2";
            return true;
        }
        start++;
        while(start<=s2.length()-s1.length()){
            int indx1=s2[start-1]-'a';
            int indx2=s2[start+s1.length()-1]-'a';
            count[indx1]++;
            count[indx2]--;
            result=true;
            for(int c:count){
                if(c!=0){
                    result=false;
                    break;
                }
            }
            if(result){
                return true;
            }
            start++;
        }
        cout<<"hey4";
        return false;
    }
};