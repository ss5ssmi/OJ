#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,l,r,a[2005]={0},b[2005]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l>>r;
		a[l+r]++;
		b[l-r+1000]++;
	}
	long long sum=0; 
	for(int i=0;i<=2000;i++){
		sum+=a[i]*(a[i]-1)/2;
		sum+=b[i]*(b[i]-1)/2;
	}
	cout<<sum;
	return 0;
}
