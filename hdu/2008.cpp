#include<stdio.h>
int main(){
	float m;
	int a,b,c,n;
	while(scanf("%d",&n)!=EOF&&n){
		a=b=c=0;
		while(n--){
		scanf("%f",&m);
		if(m<0)
			a++;
		if(m==0)
			b++;
		if(m>0)
			c++;
		}
		printf("%d %d %d\n",a,b,c);
	}
	return 0;
}
