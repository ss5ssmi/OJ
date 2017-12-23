#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,l,flag=1,sum=0;
	char d[6];
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d %s",&l,d);
		if((sum==0 && d[0]!='S') || (sum==20000 && d[0]!='N')){//路程为0，则在北极，必须向南极移动;为20000则在南极，必须向北极移动 
			flag=0;
		}
		if(d[0]=='S') {
			sum+=l;
		} else if(d[0]=='N') {
			sum-=l;
		}
		if(sum<0 || sum>20000){//满足这个条件代表已在某极且向该极移动 
			flag=0;
		}
	}
	if(!flag || sum!=0) printf("NO\n");
	else printf("YES\n");
	return 0;
}
