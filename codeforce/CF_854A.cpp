#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	return a?gcd(b%a,a):b;
}
int main() {
	int n,t;
	double maxx=0.0;
	scanf("%d",&n);
	for(int i=n/2;i>=1;i--){
		double tmp=i*1.0/(n-i)*1.0;
		if(tmp>maxx && gcd(i,(n-i))==1){
			maxx=
			t=i;
		}
	}
	printf("%d %d\n",t,n-t);
	return 0;
}
