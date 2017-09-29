#include<stdio.h>
int main(){
	int n,i,j,sum,t;
	int s[1000];
	while(scanf("%d",&n)!=EOF){
		sum=s[0]=0;
		for(i=0;i<n;i++){
			scanf("%d",&t);
			for(j=0;j<=sum;j++){
				if(s[j]>=t){
					s[j]=t;
					break;
				}else if(j==sum){
					s[sum+1]=t;
					sum++;
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
