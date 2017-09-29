#include<stdio.h>
int main(){
	int s[1000],t,f,sum;
	int i,j,k;
	while(scanf("%d",&t)!=EOF&&t){
		sum=0;
		for(i=0;i<t;i++){
			scanf("%d",&s[i]);
		}
		scanf("%d",&f);
		for(i=0;i<t;i++){
			if(s[i]==f){
				sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
