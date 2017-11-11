#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,ans=0;
	scanf("%d%d",&n,&m);
	while(1){
		if(n==0 || m==0 || (n<=1 && m<=1)) break;
		if(n>=m){
			n-=2;
			m-=1;
		}else{
			n-=1;
			m-=2;
		}
		ans++;	
	}
	printf("%d\n",ans);
	return 0;
}
