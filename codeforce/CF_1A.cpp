#include<stdio.h>
int main(){
	long long n,m,a,x,y;
	scanf("%lld%lld%lld",&n,&m,&a);
	if(n%a){
		x=n/a+1; 
	}else{
		x=n/a;
	}
	if(m%a){
		y=m/a+1;
	}else{
		y=m/a;
	}
	printf("%lld\n",x*y);
	return 0;
}
