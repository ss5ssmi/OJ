#include<stdio.h>
int f(int n){
	int i,j=1;
	for(i=1;i<=n;i++){
		j*=i;
	}
	return j;
}
int main(){
	int a,b,s,i;
	for(i=1;i<50000;i++){
		a=i;
		s=0;
		while(a!=0){
			b=a%10;
			s+=f(b);
			a/=10;
		}
		if(s==i){
			printf("%d\n",i);
		}
	}
	return 0;
}
