#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[110],m,x,y;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	cin>>m;
	while(m--){
		cin>>x>>y;
		s[x-1]+=y-1;
		s[x+1]+=s[x]-y;
		s[x]=0;
	}
	for(int i=1;i<=n;i++){
		printf("%d\n",s[i]);
	}
	return 0;
}
