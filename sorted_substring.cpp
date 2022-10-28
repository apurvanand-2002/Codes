#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++){
	    long long int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    long long int count=0;
	    for(long long int j=0;j<n;j++){
	        if(a[j]=='1' && a[j+1]=='0'){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
