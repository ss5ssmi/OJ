#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,y,a,b,c;
	scanf("%d%d%d%d%d",&x,&y,&a,&b,&c);
	long long ans=0,ax=(1LL*a*2)+(b*1LL),ay=(1LL*b)+(c*1LL*3);
	ans+=ax-x>0?ax-x:0;
	ans+=ay-y>0?ay-y:0;
	printf("%lld\n",ans);
	return 0;
}
