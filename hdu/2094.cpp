#include<stdio.h> 
#include<string.h>
int main(){
	int n,a,b;
	char x,y,w[1000],l[1000];
	int c[1000];
	int i,j;
	while(scanf("%d",&n)!=EOF&&n){
		memset(w,0,sizeof(w));
		memset(l,0,sizeof(l));
		for(i=0;i<n;i++){
			scanf("%c%c",&x,&y);
			for(j=0;;j++){
				if(x==w[j]){
					break;
				}else{
					w[j]=x;
				}
				if(y==l[j]){
					break;
				}else{
					l[j]=y;
				}
			}
		}
	}
	return 0;
}
