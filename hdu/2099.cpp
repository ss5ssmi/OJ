#include<stdio.h>
int main(){
	int a,b,i,j,t;
	while(scanf("%d%d",&a,&b)!=EOF&&(a!=0||b!=0)){
		t=0;
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
			if((a*100+i*10+j)%b==0){
				if(t!=0){
					printf(" ");
					}
				printf("%d%d",i,j);
				t++;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
