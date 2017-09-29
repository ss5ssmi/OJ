#include<stdio.h>
int main(){
	int n;
	int a,b,c,d;
	int c1=0,c2=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a+c==b&&a+c!=d){
			c1++;
		}else if(a+c!=b&&a+c==d){
			c2++;
		}
	}
	printf("%d %d\n",c2,c1);
	return 0;
}
