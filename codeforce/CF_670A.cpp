#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,maxd,mind;
	scanf("%d",&n);
	if(n%7==0) {
		maxd=mind=2*(n/7);
	} else if(n%7==1) {
		maxd=2*(n/7)+1;
		mind=maxd-1;
	} else if(n%7==6) {
		maxd=2*(n/7)+2;
		mind=maxd-1;
	} else if(n%7>=2) {
		maxd=2*(n/7)+2;
		mind=maxd-2;
	}
	printf("%d %d\n",mind,maxd);
	return 0;
}
