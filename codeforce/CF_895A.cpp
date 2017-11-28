#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[361],sum=0,tmp=180,t=1,flag=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d",&s[i]);
	}
	for(int i=1; i<=n; i++) {
		sum=0;
		for(int j=i; j<=n; j++) {
			sum+=s[j];
			tmp=min(abs(sum-180),tmp);
			if(tmp==0) goto end;
		}
	}
	end:printf("%d\n",tmp*2);
	return 0;
}

