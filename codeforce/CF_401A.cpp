#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,t,sum=0;
	scanf("%d%d",&n,&k);
	while(n--) {
		scanf("%d",&t);
		sum+=t;
	}
	if(sum<0) sum=-sum;
	int ans=0;
	while(sum) {
		for(int i=k; i>=0; i--) {
			if(sum>=i) {
				sum-=i;
				ans++;
				break;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
