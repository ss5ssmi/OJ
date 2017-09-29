#include<stdio.h>
#include<string.h>
#define maxn 100005
int ans[maxn];
int main()
{
	int t,n;
	memset(ans,0,sizeof(ans));
	for(int i=1; i<maxn; i++) {
		int x=i,y=i;
		while(y){
			x+=y%10;
			y/=10;
		}
		if(ans[x]==0 || i<ans[x]) ans[x]=i;
	}
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		printf("%d\n",ans[n]);
	}
	return 0;
}
