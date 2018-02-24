#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100],sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		sum+=s[i];
	}
	int ans=0;
	for(int i=1;i<=5;i++){
		if((i+sum)%(n+1)!=1) ans++;
	}
	cout<<ans;
	return 0;
}
