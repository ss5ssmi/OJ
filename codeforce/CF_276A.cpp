#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,f,t,s[10000];
	int tmp=-1e9;
	scanf("%d%d",&n,&k);
	for(int i=0; i<n; i++) {
		scanf("%d%d",&f,&t);
		if(t>=k) {
			s[i]=f-(t-k);
		} else {
			s[i]=f;
		}
	}
	for(int i=0;i<n;i++){
		tmp=max(tmp,s[i]);
	}
	printf("%d\n",tmp);
	return 0;
}
