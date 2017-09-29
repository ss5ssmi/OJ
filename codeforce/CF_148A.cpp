#include<stdio.h>
int main(){
	int k,l,m,n,d;
	while(scanf("%d%d%d%d%d",&k,&l,&m,&n,&d)!=EOF){
		int sum=0;
		for(int i=1;i<=d;i++){
			if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
				sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
