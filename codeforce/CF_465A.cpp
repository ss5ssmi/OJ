#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100];
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%1d",&s[i]);
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(s[i]==1){
			ans++;
		}else{
			ans++;
			break;
		}
	}
	printf("%d\n",ans);
	return 0;
}
