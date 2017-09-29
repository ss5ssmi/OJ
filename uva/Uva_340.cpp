#include<stdio.h>
#define maxn 1010
int main()
{
	int n,a[maxn],b[maxn];
	int kase=0;
	while(scanf("%d",&n)==1 && n) {
		printf("Game %d:\n",++kase);
		for(int i=0; i<n; i++) {
			scanf("%d",&a[i]);
		}
		for(;;) {
			int A=0,B=0;
			for(int i=0; i<n; i++) {
				scanf("%d",&b[i]);
				if(a[i]==b[i]) A++;
			}
			if(b[0]==0) break;
			for(int i=0; i<=9; i++) {
				int ca=0,cb=0;
				for(int j=0; j<n; j++) {
					if(a[j]==i) ca++;
					if(b[j]==i) cb++;
				}
				if(ca<cb) B+=ca;
				else B+=cb;
			}
			printf("    (%d,%d)\n",A,B-A);
		}
	}
	return 0;
}
