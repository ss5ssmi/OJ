#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,z,s[10005]={0};
	scanf("%d%d%d",&n,&m,&z);
	for(int i=n;i<=z;i+=n){
		s[i]=1;
	}
	int ans=0;
	for(int i=m;i<=z;i+=m)
		if(s[i]) ans++;
	printf("%d\n",ans);
	return 0;
}
