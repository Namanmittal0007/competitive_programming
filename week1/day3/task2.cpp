//https://practice.geeksforgeeks.org/problems/make-a-distinct-digit-array/0
#include<iostream>
using namespace std;
void distinctdigit(long long int a[],int n){
    int digit[10]={0};
    for(int i=0;i<n;i++){
        while(a[i]>0){
            digit[a[i]%10]++;
            a[i]/=10;
        } 
    }
    for(int j=0;j<10;j++){
        if(digit[j]>0){
            cout<<j<<" ";
        }
    }
}
int main() {
    long long int *a = new long long int [10000000];
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        distinctdigit(a,n);
        cout<<endl;
    }
	return 0;
}