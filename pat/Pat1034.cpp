#include<stdio.h>
int main(){
	int a1,b1,a2,b2;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
	if(a1<0){
		if(a1>=b1){
			printf("(-)");
		}
	}
	return 0;
}
