#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,a,b;
	cin>>n>>m>>a>>b;
	if(n%m==0){
		printf("0\n");
	}else{
		printf("%lld\n",min((n%m)*b,(m-(n%m))*a));
	}
	return 0;
}
