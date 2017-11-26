#include<bits/stdc++.h>
using namespace std;
int main() {
	int l[100000],r[100000],sl=0,sr=0,n;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d %d",&l[i],&r[i]);
		sl+=l[i];
		sr+=r[i];
	}
	int ans=0;
	int maxx=abs(sl-sr);
	for(int i=0;i<n;i++){
		int tmp=abs((sl-l[i]+r[i])-(sr-r[i]+l[i]));
		if(tmp>maxx){
			maxx=tmp;
			ans=i+1;
		}
	}
	printf("%d\n",ans);
	return 0;
}
