#include<bits/stdc++.h>
using namespace std;
int main() {
	int sh,sm,th,tm;
	scanf("%d:%d",&sh,&sm);
	scanf("%d:%d",&th,&tm);
	sm-=tm;
	if(sm<0) {sm=60-abs(sm);sh--;}
	sh-=th;
	if(sh<0) sh=24-abs(sh);
	 
	printf("%02d:%02d\n",sh,sm);
	return 0;
}
