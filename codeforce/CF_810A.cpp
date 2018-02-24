#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s[100],sum=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>s[i];
		sum+=s[i];
	}
	for(int i=0;;i++){
		double tmp=sum+(k*i);
		double t=tmp*1.0/(n+i)*1.0;
		if(t>=(double)k-0.5){
			printf("%d\n",i);
			return 0;
		}
	}
	return 0;
}
