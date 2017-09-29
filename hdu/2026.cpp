#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int n,i,j,l;
	while(gets(a)){
		l=strlen(a);
		a[0]-=32;
		for(i=1;i<l;i++){
			if(a[i-1]==' '){
				a[i]-=32;
			}
		}
		for(i=0;i<l;i++){
			printf("%c",a[i]);
		}printf("\n");
	}
	return 0;
}
