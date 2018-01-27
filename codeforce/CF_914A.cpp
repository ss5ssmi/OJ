#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t,max=-1e7;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		int tmp=sqrt(t);
		if(tmp*tmp!=t && t>max) max=t;
	}
	cout<<max;
	return 0;
}
