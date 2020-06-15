//https://leetcode.com/problems/find-common-characters/submissions/
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int arr[26][100]={0};
        vector<string> result;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[i].size();j++){
                arr[A[i][j]-'a'][i]++;
            }
        }
        for(int i=0;i<26;i++){
            int min=*min_element(arr[i],arr[i]+A.size());
            while(min>0){
                char val=(char)(97+i);
                string q="";
                q=val;
                result.push_back(q);
                min--;
            }
        }
        return result;
    }
};