#include<stdio.h>
int main(){
	int n,i,j,t,w,l,res,cou,max;
	int s[100000];
	while(scanf("%d",&n)!=EOF&&n){
		for(i=0;i<n;i++){
			scanf("%d%d",&w,&l);
			s[i]=w-l;
			s[n+i]=w-l;
		}
		res=cou=0;
		for(i=0;i<=n;i++){
			if(!((res+=s[i])<0)){
				cou++;
			}else{
				break;
			}
		}
		if(cou>n){
			printf("%d\n",n);
		}else{
			printf("%d\n",cou);			
		} 
	}
	return 0;
} 
