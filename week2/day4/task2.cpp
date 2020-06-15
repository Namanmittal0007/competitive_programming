//https://practice.geeksforgeeks.org/problems/subsequence-matching/0
#include <iostream>
using namespace std;
bool substring(string s,int n){
    string x="RYY";
    int i;
    for(i=0;i<n;){
        int j;
        for(j=0;j<3 and (i+j)<n;j++){
            if(s[i+j]!=x[j]){
                break;
            }
        }
        if(j==0){
            return false;
        }
        i+=j;
    }
    if(i==n){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int c;
    string s;
    cin>>c;
    cin.get();
    while(c--){
        cin>>s;
        int n=s.length();
        if(substring(s,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}