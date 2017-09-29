#include<stdio.h>
#include<string.h>
int main(){
	int s[10],n=1;
	int w[50];
	memset(w,0,sizeof(w));
	memset(s,0,sizeof(s));
	for(int i=0;i<10;i++){
		scanf("%d",&s[i]);
	}
	for(int i=1;i<10;i++){
		if(s[i]){
			w[0]=i;
			s[i]--;
			break;
		} 
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<s[i];j++){
			w[n++]=i;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",w[i]);
	}printf("\n");
	return 0;
}
