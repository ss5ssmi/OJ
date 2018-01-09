#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,t=2;
	scanf("%d%d",&n,&m);
	for(int i=2;i<=n;i++){
		t*=2;
		if(t>m){
			printf("%d\n",m);
			return 0;
		}
	}	
	printf("%d\n",m%t);
	return 0;
}
