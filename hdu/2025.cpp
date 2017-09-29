#include<stdio.h>
#include<string.h>
int main(){
	char n,a[100];
	int i,j,l;
	while(scanf("%s",&a)!=EOF){
		l=strlen(a);
		n=a[0];
		for(i=0;i<l;i++){
			if(n<a[i]){
				n=a[i];
			}
		}
		for(i=0;i<l;i++){
			printf("%c",a[i]);
			if(a[i]==n){
				printf("(max)");
			}
		}
		printf("\n");
	}
	return 0;
}
