#include<stdio.h>
int main(){
	double a=0,b=0,c=0;
	int m=0;
	scanf("%d",&m);
	while(m--){
		scanf("%lf %lf %lf",&a,&b,&c);
		if(a+b>c&&a+c>b&&b+c>a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
