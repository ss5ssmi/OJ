#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s,x,y;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&s);
		if(s==1) {
			x=i;
		}
		if(s==n) {
			y=i;
		}
	}
	int start=x<y?x:y,end=x>y?x:y;
	if(start-1>n-end){
		start=1;
	}else{
		end=n;
	}
	printf("%d\n",end-start);
	return 0;
}
