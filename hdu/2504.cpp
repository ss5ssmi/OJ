#include<stdio.h>
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int main(){
	int n,a,b,t;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		int i=2;
		t=a/b;
		for(;gcd(t,i)!=1;i++);
		printf("%d\n",b*i);	
	}
	return 0;
} 
