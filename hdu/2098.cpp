#include<stdio.h>
#include<math.h>
int prime(int n){
	int m=sqrt(n),i;
	for(i=2;i<=m;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n,i,j,count;
	while(scanf("%d",&n)!=EOF&&n){
		count=0;
		j=n/2;
		for(i=3;i<j;i++){
			if(prime(i)&&prime(n-i)){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
