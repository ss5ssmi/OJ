#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	sort(s,s+n);
	int ans=0,maxx=s[n-1],minn=s[0];
	for(int i=1;i<n-1;i++){
		if(s[i]>minn && s[i]<maxx){
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
