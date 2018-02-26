#include<bits/stdc++.h>
using namespace std;
bool pre(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main() {
	int n,s[100010];
	cin>>n;
	for(int i=1;i<=n;i++){
		if(pre(i+1)) s[i]=1;
		else s[i]=2;
	}
	printf("%d\n",n>2?2:1);
	for(int i=1;i<=n;i++){
		printf("%d",s[i]);
		printf("%c",i==n?'\n':' ');
	} 
	return 0;
}
