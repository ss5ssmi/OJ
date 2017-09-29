#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int c[1000000];
void num(){
	int i;
	char s[100],a[10]="4",b[10]="62";
	for(i=0;i<1000000;i++){
			itoa(i,s,10);
			if(strstr(s,a)!=NULL||strstr(s,b)!=NULL){
				c[i]=0;
			}else{
				c[i]=1;
			}
		}
	return;
}
int main(){
	int n,m,i,count;
	num();
	while(scanf("%d%d",&n,&m)!=EOF&&n&&m){
		count=0;
		for(i=n;i<=m;i++){
				count+=c[i];
		}
		printf("%d\n",count);
	}
	return 0;
}
