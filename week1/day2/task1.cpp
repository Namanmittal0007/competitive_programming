//https://practice.geeksforgeeks.org/problems/who-will-win/0
#include <iostream>
using namespace std;
bool binarysearch(int a[],int n,int x){
    int start=0,end=n-1,mid=(start+end)/2;
    while(start<=end){
        mid=(start+end)/2;
        if(x==a[mid]){
            return true;
        }
        else if(x>a[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}
int main() {
	int a[1000000],x,n,t;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n>>x;
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    if(binarysearch(a,n,x)){
	     cout<<1<<endl;   
	    }
	    else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}