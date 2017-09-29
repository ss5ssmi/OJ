#include<stdio.h>
int main(){
	int i,x,r=1;
	while(scanf("%d",&i)!=EOF){
		while(i--){
			scanf("%d",&x);
			if(x%2!=0){
				r*=x;	
			}
		}
		printf("%d\n",r);
		r=1;
	}
	return 0;
}
