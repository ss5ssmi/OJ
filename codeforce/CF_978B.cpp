#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,ans=0;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;i<n-2;i++){
		if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}
