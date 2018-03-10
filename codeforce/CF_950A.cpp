#include<bits/stdc++.h>
using namespace std;
int main() {
	int l,r,a;
	cin>>l>>r>>a;
	if((l==0 || r==0) && a==0) {
		printf("0\n");
		return 0;
	}
	int t=abs(l-r);
	if(a<=t) printf("%d\n",l>r?(r+a+r+a):(l+a+l+a));
	else a-=t,printf("%d\n",l>r?(l+l+(a%2==0?a:a-1)):(r+r+(a%2==0?a:a-1)));
	return 0;
}
