#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[2001],ans=0;
	scanf("%d",&n);	
	for(int i=1;i<=n;i++){
		scanf("%d",&s[i]);
	}
	int tmp=0;
	for(int i=1;i<=n;i++){
		tmp=0;
		for(int j=i;j<=n && j!=-1;j=s[j]){
			tmp++;
		}
		ans=max(ans,tmp);
	}
	printf("%d\n",ans);
	return 0;
}
