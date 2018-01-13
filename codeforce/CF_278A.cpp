#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s,t,d[101]= {0};
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>d[i];
	}
	cin>>s>>t;
	int sum1=0,sum2=0;
	for(int i=(s<t?s:t); i<(s<t?t:s); i++) {
		sum1+=d[i];
	}
	for(int i=(s>t?s:t); (i%n==0?n:i%n)!=(s>t?t:s); i++) {
		sum2+=d[i%n==0?n:i%n];
	}
	cout<<(sum1<sum2?sum1:sum2)<<endl;
	return 0;
}
