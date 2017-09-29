#include<stdio.h>
#include<string.h>
int main(){
	int n,t=0;
	char s[51];
	scanf("%d",&n);
	scanf("%s",&s);
	for(int i=0;i<n-1;i++){
		if(s[i]!=s[i+1]){
			t++;
		}
	}
	printf("%d\n",n-t-1);
	return 0;
}
 
