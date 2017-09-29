#include<stdio.h>
int main(){
	int n,m,i,j,k,x;
	int sum;
	int s[100]={2};
	for(k=1;k<100;k++){
		s[k]=2+s[k-1];
	}
	while(scanf("%d %d",&n,&m)!=EOF&&n<=100){
		sum=x=0;
		if((n%m)==0){
			for(i=0;i<(n/m)-1;i++){
				for(j=0;j<m;j++){
					sum+=s[j+x];
				}
				printf("%d ",sum/m);
				sum=0;
				x+=m;
			}
			for(j=0;j<m;j++){
				sum+=s[j+x];
			}
			printf("%d\n",sum/m);
		}else{
			for(i=0;i<(n/m);i++){
				for(j=0;j<m;j++){
					sum+=s[j+x];
				}
				printf("%d ",sum/m);
				sum=0;
				x+=m;
			}
			for(j=0;j<n%m;j++){
				sum+=s[j+x];
			}
			printf("%d\n",sum/(n%m));	
		}		
	}	
	return 0;
}
