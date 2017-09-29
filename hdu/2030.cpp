#include<stdio.h>
#include<string.h>
int main(){
	char a[100000];
	int n,i,count;
	scanf("%d",&n);
	getchar();
	while(n--){
		gets(a);
		count=0;
		for(i=0;a[i]!='\0';i++){
			if(a[i]<0){
				count++;
				}
			}
		printf("%d\n",count/2);
	}
	return 0;
}
