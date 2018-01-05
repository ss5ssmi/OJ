#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100],sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		sum+=s[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if((sum-s[i])%2==0){
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
