#include<stdio.h>
int s[100];
void f(int s[],int n,int t){
	int a[100],j=0;
	for(int i=n-t%n;i<n;i++){
		a[j++]=s[i];
	}
	for(int i=0;i<n-t%n;i++){
		a[j++]=s[i];
	}
	for(int i=0;i<n;i++){
		s[i]=a[i];
	}
}
int main(){
	int n,t,i;
	while(scanf("%d%d",&n,&t)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&s[i]);
		}
		f(s,n,t);
		for(i=0;i<n;i++){
			printf("%d",s[i]);
			if(i!=n-1){
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
