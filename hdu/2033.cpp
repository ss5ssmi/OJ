#include<stdio.h>
int main(){
	int ah,am,as,bh,bm,bs,n;
	scanf("%d",&n);
	while(n--){
		ah=am=as=bh=bm=bs=0;
		scanf("%d%d%d%d%d%d",&ah,&am,&as,&bh,&bm,&bs);
		as+=bs;
		am+=bm;
		ah+=bh;
		am+=(as/60);
		as=as%60;
		ah+=(am/60);
		am=am%60;
		printf("%d %d %d\n",ah,am,as);
	}
	return 0;
}
