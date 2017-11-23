#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[1001]={0};
	scanf("%d",&n);
	for(int i=1,j=1; i<=n; j++) {
		int t=0,tmp=j;
		while(tmp){
			s[i+(t++)]=tmp%10;
			tmp/=10;
		} 
		reverse(s+i,s+t+i);
		i+=t;
	}
	printf("%d\n",s[n]);
	return 0;

}
