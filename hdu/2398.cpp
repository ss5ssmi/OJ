#include<stdio.h>
int main(){
	double a,b,c;
	int i;
	while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
		for(i=1;;i++){
			a=a+(a*b/100);
			if(a>=c){
				break;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}
