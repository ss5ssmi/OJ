#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s[150001],t[150001]= {0},ans,min=1e9;
	scanf("%d%d",&n,&k);
	for(int i=1; i<=n; i++) {
		scanf("%d",&s[i]);
		t[i]=t[i-1]+s[i];
		if(i>=k){
			int tmp=t[i]-t[i-k];
			if(min>tmp){
				min=tmp;
				ans=i-k+1;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
