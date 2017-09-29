#include<stdio.h>
#include<string.h> 
int main(){
	char a[80]={0},b[80]={0},c[80]={0};
	int n=0,flag=0,fl,m=0;
	scanf("%s %s",&a,&b);
	for(int i=0;i<strlen(a);i++){
		for(int j=0;j<strlen(b);j++){
			if(a[i]!=b[j]){
				flag++;
			}
		}
		if(flag==strlen(b)){
			if(a[i]>='a') c[n++]=a[i]-32;
			else c[n++]=a[i];
		}
		flag=0;
	}
	for(int i=0;i<strlen(c);i++){
		fl=1;
		for(int j=0;j<i;j++){
			if(c[i]==c[j]){
				fl=0;
			}
		}
		if(fl){
			printf("%c",c[i]);
		}
	}
	return 0;
}
