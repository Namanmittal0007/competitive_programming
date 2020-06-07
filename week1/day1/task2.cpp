//https://practice.geeksforgeeks.org/problems/missing-number/0
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n,a[10000],t;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
	    for(int x=0;x<n-1;x++){
	        cin>>a[x];
	    }
	    sort(a,a+(n-1));
	    if(a[0]==2){
	        cout<<1<<endl;
	    }
	    else if(a[n-2]!=n){
	        cout<<n<<endl;
	    }
	    else{
	        for(int x=1;x<n-1;x++){
	            if(a[x]-a[x-1]!=1){
	                cout<<a[x]-1<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}