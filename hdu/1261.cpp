#include<stdio.h>
int main(){
	int n[30],t,i,j;
	long long a,b,c,d;
	while(scanf("%d",&t)!=EOF&&t){
		a=0;
		for(i=0;i<t;i++){
			scanf("%d",&n[i]);
			a+=n[i];
		}
		c=1;
		for(i=0;i<t;i++){
			b=1;
			for(j=1;j<=n[i];j++){
				b*=j;
			}
			c*=b; 
		}
		d=1;
		for(i=1;i<=a;i++){
			d*=i;
		}
		printf("%lld\n",d/c);
	}
	return 0;
}
