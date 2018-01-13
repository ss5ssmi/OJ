#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,n;
	long long s[100000],sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		sum+=a;
	}
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	if(s[n-1]+s[n-2]>=sum) printf("YES\n");
	else printf("NO\n");
	return 0;
}
