#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[5010];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		if(s[s[s[s[i]]]]==s[i]){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
}
