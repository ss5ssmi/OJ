#include<stdio.h>
#include<math.h>
int main(){
	int x,y;
	int i,j,k,m;
	while(scanf("%d %d",&x,&y)!=EOF&&(x||y)){
		k=0;
		for(i=x;i<=y;i++){
			m=i*i+i+41;
			for(j=2;j<m;j++){
				if(m%j==0){
					k++;
					break;
				}
			}
		}
		if(k==0){
			printf("OK\n");
		}else{
			printf("Sorry\n");
		}
	}
	return 0;
}
