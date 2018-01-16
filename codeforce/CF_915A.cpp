#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s,ans=1;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s>ans && k%s==0){
			ans=s;
		}
	}
	cout<<k/ans;
	return 0;
}
