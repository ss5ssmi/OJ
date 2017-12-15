#include<bits/stdc++.h>
using namespace std;
#define maxx 8888888888
bool lucky(long long t){
	if(t<0) t=-t;
	while(t){
		if(t%10==8){
			return true;
		}
		t/=10;
	}
	return false;
}
int main() {
	long long  n;
	scanf("%lld",&n);
	for(long long i=n+1;i<=maxx;i++){
		if(lucky(i)){
			printf("%lld\n",i-n);
			break;
		}
	}
	return 0;
}
