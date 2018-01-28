#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	int i=0;
	while(s[i]<s[i+1] && i<=n-2) i++;
	while(s[i+1]==s[i] && i<=n-2) i++;
	for(;i<=n-2;i++){
		if(s[i]<=s[i+1]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
