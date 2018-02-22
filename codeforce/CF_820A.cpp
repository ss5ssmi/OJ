#include<bits/stdc++.h>
using namespace std;
int main() {
	int c,v0,v1,a,l,ans=1;
	cin>>c>>v0>>v1>>a>>l;
	c-=v0;
	while(c>0){
		v0+=a;
		if(v0>v1) v0=v1;
		c-=(v0-l)>0?(v0-l):0;
		ans++;
	}
	cout<<ans;
	return 0;
}
