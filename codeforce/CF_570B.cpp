#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	if(n==1) {
		printf("%d\n",m);
	} else if(m>n/2) {
		printf("%d\n",m-1);
	} else {
		printf("%d\n",m+1);
	}
	return 0;
}
