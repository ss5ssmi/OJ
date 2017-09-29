#include<stdio.h>
int main(){
	int n,s[100],e[100];
	int i,j,sum,t1,t2;
	while(scanf("%d",&n)!=EOF&&n){
		for(i=1;i<=n;i++){
			scanf("%d%d",&s[i],&e[i]);
		}
		for(i=1;i<=n;i++){
			for(j=i;j<=n;j++){
				if(s[i]>=s[j]){
					if(e[i]>=e[j]){
						t1=s[i];s[i]=s[j];s[j]=t1;
						t2=e[i];e[i]=e[j];e[j]=t2;
					}
				}
			}
		}
		for(i=1,sum=1,j=2;j<=n;j++){
			if(s[j]>=e[i]){
				i=j;
				sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
