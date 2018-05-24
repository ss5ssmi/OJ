#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100];
	cin>>n;
	for(int i=0;i<n/2;i++){
		cin>>s[i];
	}
	sort(s,s+n/2);
	int cnt1=0,cnt2=0,t=2;
	for(int i=0;i<n/2;i++){
		cnt1+=abs(s[i]-t);
		t+=2;
	}
	t=1;
	for(int i=0;i<n/2;i++){
		cnt2+=abs(s[i]-t);
		t+=2;
	}
	printf("%d\n",min(cnt1,cnt2));
	return 0;
}
