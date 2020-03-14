#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int hh, mm, ans = 0;
		scanf("%d%d",&hh,&mm);
		ans += 60 - (mm==0?60:mm);
		ans += ( (mm==0?24:23) - hh) * 60;
		printf("%d\n",ans);
	}
	return 0;
}
