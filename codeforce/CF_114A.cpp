#include<bits/stdc++.h>
using namespace std;
int main() {
	long long k,l,tmp,i=2;
	cin>>k>>l;
	tmp=k;
	if(tmp==l){
		printf("YES\n0");
		return 0;
	} 
	while(tmp<l){
		tmp=pow(k,i);
		if(tmp==l){
			printf("YES\n%d",i-1);
			return 0;
		}
		i++;
	}
	printf("NO\n");
	return 0;
}
