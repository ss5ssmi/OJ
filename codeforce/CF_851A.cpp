#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,t;
	cin>>n>>k>>t;
	if(t==0) {
	printf("0\n");
		return 0;
	}
	int tt=t%(n+k);
	if(tt<=k) {
		printf("%d\n",tt);
	} else if(tt>=n) {
		printf("%d\n",(n+k)-tt);
	} else {
		printf("%d\n",k);
	}
	return 0;
}
