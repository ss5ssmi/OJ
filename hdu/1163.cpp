#include<stdio.h>
#include<math.h>
int f(int s){
	int n;
	int m;
	int sum=0;
	m=n=pow(s,s);
	while(m>10){
		sum=0;
		while(n>0){
			sum+=n%10;
			n/=10;
		}
		m=sum;
		n=sum;
	}
	printf("%d\n",m);
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF&&n){
		f(n);
	}
	return 0;
}
