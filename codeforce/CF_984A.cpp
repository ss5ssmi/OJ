#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	if(n%2==1) printf("%d\n",s[n/2]);
	else printf("%d\n",s[n/2-1]);
	return 0;
}
