#include<stdio.h>
int sum=0;
void f(int a,int b){
	int i,j;
	if(b>13){
		return;
	}
	if(a==13){
		if(b==13){
			sum++;
		}
		return;
	}
	for(i=0;i<=4;i++){
		f(a+1,b+i);
	}
}
int main(){
	f(0,0);
	printf("%d\n",sum);
	return 0;
} 
