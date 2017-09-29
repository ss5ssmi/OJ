#include<stdio.h>
int main(){
	int x1,x2,x3,x4,x5,x6,n;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5,&x6);
		if(x1-x2+x3-x4+x5-x6==0){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
} 
