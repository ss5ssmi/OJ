#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<1 || b<2 || c<4) {
		printf("0\n");
		return 0;
	}
	int ans=0;
	while(a>=1 || b>=2 || c>=4) {
		ans+=7;
		a-=1;
		b-=2;
		c-=4;
		if(a<1 || b<2 || c<4) {
			break;
		}
	}
	printf("%d\n",ans);
	return 0;
}
