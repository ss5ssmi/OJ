#include<stdio.h>
#include<math.h>
long A(long m,long n){
	if(n==0) return A(m-1,1);
	else if(m==0) return n+2;
	else if(m==1) return n+2;
	else if(m==2) return 2*n+3;
	else if(m==3) return A(m,n-1)*2+3; 
} 
int main(){
	long m,n;
	while(scanf("%ld%ld",&m,&n)!=EOF){
		printf("%ld\n",A(m,n));
	}
	return 0;
} 
