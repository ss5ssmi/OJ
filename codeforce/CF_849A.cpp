#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100];
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	if(s[0]%2==0 || s[n-1]%2==0 || n%2==0) printf("No\n");
	else printf("Yes\n");
	return 0;
}
