#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000],ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		ans=max(ans,s[i]); 
	}
	printf("%d\n",ans);
	return 0;
}
