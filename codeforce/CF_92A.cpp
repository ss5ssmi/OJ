#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	while(1) {
		for(int i=1; i<=n; i++) {
			if(m>=i) m-=i;
			else goto end;
		}
	}
	end:printf("%d\n",m);
	return 0;
}
