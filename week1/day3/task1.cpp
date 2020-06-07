//https://practice.geeksforgeeks.org/problems/two-repeated-elements/0
#include <iostream>
using namespace std;
int main() {
	int a[100000],t,n;
    cin>>t;
	for(int i=0;i<t;i++){
	    cin>>n;
        int b[100000]={0};
	    for(int j=0;j<n+2;j++){
	        cin>>a[j];
            b[a[j]]++;
            if(b[a[j]]>1){
                cout<<a[j]<<" ";
            }	    
        }
        cout<<endl;
	    
	}
	return 0;
}