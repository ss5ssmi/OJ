#include<stdio.h>
int main(){
	int n,m,i;
	while(scanf("%d",&n)!=EOF){
		m=0;
		for(i=2;i<n;i++){
			m+=i/2;
		}
		printf("%d\n",m);
	}
	return 0;
} 
