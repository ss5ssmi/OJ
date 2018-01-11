#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main() {
	long long f[10],x,y,n;
	cin>>x>>y>>n;
	x=(x+mod)%mod;
	y=(y+mod)%mod;
	f[0]=x;
	f[1]=y;
	f[2]=(y-x+mod)%mod;
	f[3]=(-x+mod)%mod;
	f[4]=(-y+mod)%mod;
	f[5]=(x-y+mod)%mod;
	cout<<f[(n-1)%6]<<endl;
	return 0;
}
