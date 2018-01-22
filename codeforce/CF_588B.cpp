#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n,s[10000],t=1,ans=1;
	scanf("%I64d",&n);
	for(int i=2;i<=n;i++){
		while(n%i==0){
			if(s[t-1]!=i) s[t++]=i;
			n/=i;
		}
		if(i>sqrt(n)){s[t++]=n;break;} 
	}
	for(int i=1;i<t;i++){
		ans=ans*s[i];
	}
	printf("%I64d\n",ans);
	return 0;
}
