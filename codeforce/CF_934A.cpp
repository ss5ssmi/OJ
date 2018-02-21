#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	long long a[50],c[50],b;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		c[i]=-2e18;
	}
	for(int i=0;i<m;i++){
		cin>>b;
		for(int j=0;j<n;j++){
			c[j]=max(c[j],a[j]*b);
		}
	}
	sort(c,c+n);
	cout<<c[n-2];
	return 0;
}
