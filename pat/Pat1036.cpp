#include<stdio.h>
int main(){
	int n,l;
	char p;
	scanf("%d %c",&n,&p);
	//�� 
	for(int i=0;i<n;i++){
		printf("%c",p);
	}
	printf("\n");
	//�м䲿��
	if(n%2==0){
		l=n/2-2;
	}else{
		l=(n/2)-1;
	}
	for(int i=0;i<l;i++){
		for(int j=0;j<n;j++){
			if(j==0||j==n-1)
				printf("%c",p);
			else
				printf(" ");
		}
		printf("\n");
	} 
	//�� 
	for(int i=0;i<n;i++){
		printf("%c",p);
	}
	printf("\n");
	return 0;
} 
