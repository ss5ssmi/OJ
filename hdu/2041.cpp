#include<stdio.h>
int main(){
	int m,n,i;
	int f[40];
	f[0]=1;f[1]=1;
	for(i=2;i<40;i++){
			f[i]=f[i-2]+f[i-1];
		}
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		printf("%d\n",f[m-1]);
	}
	return 0;
}
