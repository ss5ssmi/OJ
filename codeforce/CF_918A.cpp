#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,f[1010]={0},s[1010]={0};
	f[1]=f[2]=1;
	s[1]=s[2]=1;
	cin>>n;
	for(int i=3;i<=1000;i++){
		f[i]=f[i-1]+f[i-2];
		if(f[i]>1000) break;
		s[f[i]]=1;
	}
	for(int i=1;i<=n;i++){
		printf("%c",s[i]?'O':'o');
	}
	return 0;
}
