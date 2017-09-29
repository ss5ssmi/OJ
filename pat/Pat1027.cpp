#include<stdio.h> 
#include<math.h> 
int main(){
	int n,num,x;
	char c;
	scanf("%d %c",&num,&c);
	x=(int)((sqrt((num + 1) / 2)))*2-1;
	n=num - ((x + 1) / 2)*((x + 1) / 2) * 2 + 1; 
	for(int i=0;i<x;i++){
		if(i<=x/2){
			for(int j=0;j<i;j++){
				printf(" ");
			}
			for(int j=0;j<x-i*2;j++){
				printf("%c",c);
			}
			printf("\n");
		}else{
			for(int j=0;j<x-i-1;j++){
				printf(" ");
			}
			for(int j=0;j<x-(x-i-1)*2;j++){
				printf("%c",c);
			}
			printf("\n");
		}
	}
	printf("%d\n",n);
	return 0;
}
