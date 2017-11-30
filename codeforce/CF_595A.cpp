#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,a,b;
	int ans=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<2*m;j+=2){
			scanf("%d %d",&a,&b);
			if(a||b) ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
