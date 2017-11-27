#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,k,a[110];
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
	}
	int ansr=0,ansl=0;
	for(int i=m; i<=n; i++) {
		if(a[i] && a[i]<=k) {
			ansr=i;
			break;
		}
	}
	for(int i=m; i>=1; i--) {
		if(a[i] && a[i]<=k) {
			ansl=i;
			break;
		}
	}
	if(ansl==0) ansl=-1e9;
	if(ansr==0) ansr=1e9; 
	printf("%d\n",min( (ansr-m)*10 ,(m-ansl)*10));
	return 0;
}
