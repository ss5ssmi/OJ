#include<stdio.h>
#include<string.h>
int main(){
	char k[10000][50],d[1000000];
	int n,t,sum;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%s",&k[i]);
		}
		getchar();
		gets(d);
		for(int i=0;i<n;i++){
			if(strstr(d,k[i])!=NULL){
				sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
