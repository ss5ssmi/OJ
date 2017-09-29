#include<stdio.h>
int main(){
	int n,i,j,k,t=1;
	char c;
	while(scanf("%c%d",&c,&n)!=EOF&&c!='@'){
		getchar();
		if(t!=1)
			printf("\n");
		t++;
		for(i=1;i<n;i++){
			for(j=n-i;j>=1;j--)
				printf(" ");
			for(k=1;k<=2*i-1;k++){
				if(k==1||k==2*i-1)
					printf("%c",c);
				else
					printf(" ");
			}
			printf("\n");
		}
		for(i=0;i<2*n-1;i++)
			printf("%c",c);
		printf("\n");
	}
	return 0;
}
