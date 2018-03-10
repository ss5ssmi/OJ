#include<bits/stdc++.h>
using namespace std;
int main() {
	long long a,b;
	cin>>a>>b;
	while(a!=0 && b!=0){
		if(a>=2*b) a%=2*b;
		else{
			if(b>=2*a) b%=2*a;
			else break;
		}
	}
	printf("%lld %lld\n",a,b);
	return 0;
}
