#include<stdio.h>
int main(){
	int sum;
	for(int i=1;i<=236;i++){
		sum=0;
		for(int j=i;j<=236;j++){
			sum+=j;
			if(sum==236){
				printf("%d\n",i);
				goto end;
			}
		}
	}
	end:return 0;
} 
