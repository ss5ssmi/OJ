#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[1000],d[1000];
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s[i]>>d[i];
		while(i>0 && s[i]<=s[i-1]){
			s[i]+=d[i];
		}
	}
	cout<<s[n-1];
	return 0;
}
