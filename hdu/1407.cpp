#include<stdio.h>
int main(){
	int n,i,j,k,t;
	while(scanf("%d",&n)!=EOF){
		t=0;
		for(i=1;i<=100;i++){
			if(t==1) break;
			for(j=i;j<=100;j++){
				if(t==1) break;
				for(k=j;k<=100;k++){
					if(i*i+j*j+k*k==n){
						printf("%d %d %d\n",i,j,k);
						t=1;
						break;
					}
				}
			}
		}
	}
	return 0;
}
