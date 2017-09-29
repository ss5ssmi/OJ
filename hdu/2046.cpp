#include<stdio.h>
int main(){
	int n,i;
	double s[50]={1,2,3};
	for(i=2;i<50;i++){
		s[i]=s[i-1]+s[i-2];
	}
	while(scanf("%d",&n)!=EOF&&n){
		printf("%.lf\n",s[n-1]);		
	}
	return 0;
}

