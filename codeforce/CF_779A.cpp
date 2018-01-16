#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a[6]={0},b[6]={0},t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		a[t]++;
	}
	for(int i=0;i<n;i++){
		cin>>t;
		b[t]++;
	}
	int ans=0;
	for(int i=1;i<6;i++){
		if((a[i]+b[i])%2!=0) {printf("-1\n");return 0;} 
		else ans+=(abs(a[i]-b[i]))/2;
	}
	cout<<ans/2;//exchange
	return 0;
}
