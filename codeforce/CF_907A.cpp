#include<bits/stdc++.h>
using namespace std;
int main() {
	int v1,v2,v3,vm;
	scanf("%d%d%d%d",&v1,&v2,&v3,&vm);
	if(vm>2*v3 || vm>=v2 || v3>2*vm) {
		printf("-1\n");
	} else {
		printf("%d\n%d\n%d\n",2*v1,2*v2,max(v3,vm));
	}
	return 0;
}
