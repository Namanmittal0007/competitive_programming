//https://www.geeksforgeeks.org/naive-algorithm-for-pattern-searching/
#include<iostream>
#include<string.h>
using namespace std;
void search(char *s1,char *s2){
    int m=strlen(s1);
    int n=strlen(s2);
    for(int i=0;i<=n-m;i++){
        bool result=true;
        for(int j=0;j<m;j++){
            if(s2[i+j]!=s1[j]){
                result=false;
                break;
            }
        }
        if(result){
            cout<<"Pattern found at: "<<i<<endl;
        }
    }
}
int main(){
    char s[2][100];
    cin>>s[0];
    cin>>s[1];
    search(s[0],s[1]);
    return 0;
}