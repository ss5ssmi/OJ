#include<stdio.h>
int main(){
	int n,i;
	char m[12]={0};
	scanf("%d",&n);
	while(n--){
		for(i=0;i<12;i++){
			scanf("%c",&m[i]);	
		}
		printf("6");
		for(i=7;i<12;i++){
			printf("%c",m[i]);
		}
		printf("\n");
	}
	return 0;
}
