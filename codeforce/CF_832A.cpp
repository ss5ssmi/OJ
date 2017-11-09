#include<bits/stdc++.h>
using namespace std;
int main() {
	__int64 n,k;
	scanf("%I64d%I64d",&n,&k);
	if((n/k)%2==1){
		printf("YES\n"); 
	}else{
		printf("NO\n");
	}
	return 0;
}
