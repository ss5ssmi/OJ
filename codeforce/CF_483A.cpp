#include<bits/stdc++.h>
using namespace std;
#define LL long long
int gcd(LL a,LL b){
	return b==0?a:gcd(b,a%b);
}
int main() {
	LL l,r;
	scanf("%lld%lld",&l,&r);
	if(r-l<2){
		printf("-1\n");		
	}else{
		for(LL i=l;i<=r;i++){
			for(LL j=i;j<=r;j++){
				for(LL k=j;k<=r;k++){
					if(gcd(i,j)==1 && gcd(j,k)==1 && gcd(i,k)>1){
						printf("%lld %lld %lld\n",i,j,k);
						return 0;
					}
				}
			}
		}
		printf("-1\n");
	}
	return 0;
}
