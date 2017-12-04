#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000]={0};
	scanf("%d",&n);
	scanf("%d",&s[0]);
	for(int i=1;i<n;i++){
		scanf("%d",&s[i]);
		s[i-1]+=s[i];
	}
	for(int i=0;i<n;i++){
		printf("%d",s[i]);
		printf("%s",i==n-1?"\n":" ");
	}
	return 0;
}
