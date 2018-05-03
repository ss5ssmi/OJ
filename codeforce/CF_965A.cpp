#include<bits/stdc++.h>
using namespace std;
int main() {
	int k,n,s,p;
	cin>>k>>n>>s>>p;
	int t=(n%s==0)?(n/s):(n/s)+1;
	int sum=((t*k)%p==0)?(t*k/p):(t*k/p)+1;
	cout<<sum<<endl;
	return 0;
}
