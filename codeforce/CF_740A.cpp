#include<bits/stdc++.h>
using namespace std;
long long minn(long long a,long long b,long long c) {
	if(a<b && a<c) return a;
	if(b<a && b<c) return b;
	if(c<a && c<b) return c;
}
int main() {
	long long n,a,b,c,t;
	cin>>n>>a>>b>>c;
	t=n%4;
	if(t==0) {
		printf("0\n");
	} else if(t==1) {
		printf("%lld\n",minn(a*3,a+b,c));
	} else if(t==2) {
		printf("%lld\n",minn(a*2,b,2*c));
	} else if(t==3) {
		printf("%lld\n",minn(a,b+c,3*c));
	}
	return 0;
}
