#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s[100010];
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		s[i]=i;
	}
	int tmax=s[k+1],tmin=s[2];
	for(int i=2;i<=k+1;i++){
		if(i%2==0) s[i]=tmax--;
		else s[i]=tmin++;
	}
	for(int i=1;i<=n;i++){
		printf("%d",s[i]);
		printf("%c",i==n?'\n':' ');
	}
	return 0;
}
