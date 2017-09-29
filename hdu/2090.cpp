#include<stdio.h>
int main(){
	int i,j;
	char n[100];
	double c,p,count;
	while(scanf("%s%lf%lf",&n,&c,&p)!=EOF){
		count+=c*p;
	}
	printf("%.1lf\n",count);
	return 0;
}
