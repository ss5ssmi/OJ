#include<bits/stdc++.h>
using namespace std;
int main() {
	__int64 n,k,a,b,ans=0;
	cin>>n>>k>>a>>b;
	if(n<k || k==1) {
		cout<<(n-1)*a;
	} else {
		while(n>=k) {
			if(n%k==0) {
				if(b > a*(n-(n/k)) ) {
					ans+=a*(n-(n/k));
					n=(n/k);
				}else{
					n/=k;
					ans+=b;
				}
			} else {
				ans+=(n-(n/k)*k)*a;
				n=(n/k)*k;
			}
		}
		ans+=(n-1)*a;
		cout<<ans;
	}
	return 0;
}
