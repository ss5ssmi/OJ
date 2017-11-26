#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
	return a==0?b:gcd(b%a,a);
}
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int t=max(a,b);
	int f=6-t+1;
	int s=gcd(f,6);
	printf("%d/%d\n",f/s,6/s);
	return 0;
}
