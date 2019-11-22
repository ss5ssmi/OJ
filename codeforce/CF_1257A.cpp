#include<stdio.h>
int cal(int a,int b){return (a>b?a:b)-(a>b?b:a);}
int main(){
	int t,n,x,a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d %d",&n,&x,&a,&b);
		int s = cal(a,b), l = cal(n,(a>b?a:b)) + cal(1,(a>b?b:a));
		printf("%d\n",s + (l>x?x:l) );
	} 
	return 0;
} 
