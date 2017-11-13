#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,tmp,l=0;
	int s,ans[60],t[10]={0,0,2,3,322,5,53,7,7222,7332};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%1d",&s);
		tmp=t[s];
		while(tmp){
			ans[l++]=tmp%10;
			tmp/=10;
		}
	}
	sort(ans,ans+l);
	for(int i=l-1;i>=0;i--){
		printf("%d",ans[i]);
	}printf("\n");
	return 0;
}
