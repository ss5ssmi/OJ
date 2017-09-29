#include<stdio.h>
#include<math.h>
int s[10001];
int f(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
} 
int main(){
	int m,n,i,j,k;
	for(i=2,j=1;j<=10000;i++){
		if(f(i)){
			s[j++]=i;
		}
	}
	while(scanf("%d%d",&m,&n)!=EOF){
		for(i=m,k=1;i<=n;i++,k++){
				if(k%10==0){
					printf("%d\n",s[i]);
				}else{
					if(i==n){
						printf("%d\n",s[i]);
					}else{
						printf("%d ",s[i]);
					}
				}
			}
	}
	return 0;
}
