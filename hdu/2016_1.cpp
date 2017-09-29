#include<stdio.h>
int main(){
	int sum=0;
	for(int i=1;i<=100;i++){
		sum+=i;
		for(int j=0;j<i;j++){
			sum+=j; 
		}
	}
	printf("%d\n",sum);
} 
