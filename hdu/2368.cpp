#include<stdio.h>
int main(){
	int i=1;
	long long r,w,l;
	while(scanf("%lld",&r)!=EOF&&r){
		scanf("%lld%lld",&w,&l);
		if(w*w+l*l<=4*r*r){
			printf("Pizza %d fits on the table.\n",i++);
		}else{
			printf("Pizza %d does not fit on the table.\n",i++);
		}
	} 
	return 0;
}
