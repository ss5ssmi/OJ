#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100];
	__int64 ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		if(s[i]==1) ans=1;
	}
	for(int i=0;i<n;i++){
		if(s[i]==1){
			for(int j=i+1;j<n;j++){
				if(s[j]==1){
					ans*=(j-i);
					break;
				}
			}
		}
	}
	printf("%I64d\n",ans);
	return 0;
}
