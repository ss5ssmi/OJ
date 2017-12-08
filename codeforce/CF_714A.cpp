#include<bits/stdc++.h>
using namespace std;
int main() {
	__int64 l1,r1,l2,r2,k;
	scanf("%I64d%I64d%I64d%I64d%I64d",&l1,&r1,&l2,&r2,&k);
	__int64 t1=max(l1,l2),t2=min(r1,r2);
	if(r1<l2 || r2<l1){
		printf("0\n");
		return 0;
	}
	__int64 ans=abs(t1-t2)+1;
	if(k>=t1 && k<=t2) ans-=1;
	printf("%I64d\n",ans);
	return 0;
}
