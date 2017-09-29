#include<stdio.h>
int main(){
	int s,sum,flag=0;;
	while(scanf("%d",&s)!=EOF){
		if(flag)printf("\n");
		flag=1;
		sum=0;
		while(s){
			if(s%2==0){
				sum+=s%10;
				s/=10;
			}else{
				s/=10;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
