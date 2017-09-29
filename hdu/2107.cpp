#include<stdio.h>
int main(){
	int n,s,max;
	while(scanf("%d",&n)!=EOF&&n){
		max=0;
		while(n--){
			scanf("%d",&s);
			if(s>max)
				max=s;
		}
		printf("%d\n",max);
	} 
	return 0;
}
