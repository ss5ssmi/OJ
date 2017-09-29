#include<stdio.h>
int main(){
	int a,b,n,i;
	double s[50]={1,1,2};
	for(i=3;i<50;i++){
		s[i]=s[i-1]+s[i-2];
	}
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		printf("%.0lf\n",s[b-a]);
	}
	return 0;
}
