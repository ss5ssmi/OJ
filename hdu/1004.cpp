#include<stdio.h>
#include<string.h>
struct d{
	char c[15];
};
int main(){
	int n,i,j,x,y,t;
	struct d s[1000];
	while(scanf("%d",&n)!=EOF&&n){
		for(i=0;i<n;i++){
			scanf("%s",&s[i].c);
		}
		x=0;
		for(i=0;i<n;i++){
			y=0;
			for(j=1;j<n;j++){
				if(strcmp(s[i].c,s[j].c)==0){
					y++;
				} 
				if(y>x){
					x=y;
					t=i;
				}
			}
		}
		printf("%s\n",s[t].c);
	}
	return 0;
} 
