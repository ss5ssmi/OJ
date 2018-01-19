#include<bits/stdc++.h>
using namespace std;
int main() {
	long long a,b;
	cin>>a>>b;
	int ans=1;
	if(b-a>=10){
		cout<<"0";
		return 0;
	}
	for(long long i=a+1;i<=b;i++){
		ans*=(i%10);
		if(ans/10) ans%=10;
	}
	cout<<ans;
	return 0;
}
