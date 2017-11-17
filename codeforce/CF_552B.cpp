#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t=0;
	scanf("%d",&n);
	long long num[11]={0,9,90,900,9000,90000,900000,9000000,90000000,900000000,9000000000};
	long long sum=0; 
	while(n){
		if(n>=num[t]){
			sum+=num[t]*1LL*t;
			n-=num[t];
//			printf("n>=t %d %d\n",n,t);
		}else{
			sum+=n*1LL*t;
			n=0;
//			printf("n<t %d %d\n",n,t);
		}
		t++;
	}
	printf("%lld\n",sum);
	return 0;
}
