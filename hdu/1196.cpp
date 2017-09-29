#include<stdio.h>
#include<math.h>
int main(){
	int a,n[1000],i,sum;
	while(scanf("%d",&a)!=EOF&&a){
		i=0;
		while(a){
			n[i++]=a%2;
			a/=2;
		}
		for(i=0;i<1000;i++){
			if(n[i]==1){
				sum=pow(2,i);
				break;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
