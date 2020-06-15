#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    string x[100];
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        getline(cin,x[i]);
    }
    for(int i=0;i<n;i++){
        string rev=x[i];
        reverse(rev.begin(),rev.end());
        for(int j=i+1;j<n;j++){
            if(x[j]==rev){
                cout<<x[j].length()<<" "<<x[j][(x[j].length()-1)/2];
                break;
            }
        }
    }
}