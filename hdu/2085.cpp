#include<stdio.h>
int main(){
	int n,i;
	long long h,l,c;
	while(scanf("%d",&n)!=EOF&&n!=-1){
		h=1;l=0;
		for(i=0;i<n;i++){
			c=h*3+l*2;
			l=h+l;
			h=c;
		}
		printf("%lld, %lld\n",h,l);
	}
	return 0;
}
