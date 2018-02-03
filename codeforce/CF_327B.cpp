#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000
long long su[MAX],cnt;
bool isprime[MAX];
void prime() {
	cnt=1;
	memset(isprime,1,sizeof(isprime));
	isprime[0]=isprime[1]=0;
	for(long long i=2; i<=MAX; i++) {
		if(isprime[i])
			su[cnt++]=i;
		for(long long j=1; j<cnt&&su[j]*i<MAX; j++) {
			isprime[su[j]*i]=0;
		}
	}
}
int main() {
	int n;
	prime();
	cin>>n;
	for(int i=1; i<=n; i++) {
		printf("%d",su[i]);
		printf("%c",i==n?'\n':' ');
	}
	return 0;
}
