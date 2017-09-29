#include<stdio.h>
int main(){
	int n,i,j,s[100],x,y,t;
	float r;
	while(scanf("%d",&n)!=EOF&&(2<n<=100)){
		r=0;
		for(i=0;i<n;i++){
			scanf("%d",&s[i]);
		}
		for(x=0;x<n;x++){
			for(y=x;y<n;y++){
				if(s[x]<s[y]){
					t=s[x];s[x]=s[y];s[y]=t;
				}
			}
		}
		for(j=1;j<n-1;j++){
			r+=s[j];
		}
		printf("%.2f\n",r/(n-2));
	}
	return 0;
}
