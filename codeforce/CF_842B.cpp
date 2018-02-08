#include<bits/stdc++.h>
using namespace std;
int main() {
	int r,d,n,ans=0;
	double x,y,z;
	cin>>r>>d>>n;
	d=r-d;
	for(int i=0;i<n;i++){
		cin>>x>>y>>z;
		double tmp=sqrt(x*x+y*y);
		if(tmp>=d+z && tmp+z<=r) ans++;
	}
	cout<<ans;
	return 0;
}
