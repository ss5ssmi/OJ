#include<stdio.h>
int f(int n,int u,int d){
	int t=0;
	int m=0;
	while(m<n){
		m+=u;
		t++;
		if(m<n){
			m-=d;
			t++;
		} 
	}
	printf("%d\n",t);
}
int main(){
	int d,u,n;
	while(scanf("%d%d%d",&n,&u,&d)!=EOF&&n&&u&&d){
		f(n,u,d);
	}
	return 0;
}
