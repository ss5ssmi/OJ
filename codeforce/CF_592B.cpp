#include<bits/stdc++.h>
using namespace std;
int main() {
	long long s[55000];
	int t;
	s[3]=1;
	cin>>t;
	for(int i=4,j=3;i<=t;i++,j+=2){
		s[i]=s[i-1]+j;
	}
	cout<<s[t];
	return 0;
}
