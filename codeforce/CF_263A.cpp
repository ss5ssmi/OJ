#include<stdio.h>
int main() {
	int s[5][5];
	int x,y;
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			scanf("%d",&s[i][j]);
			if(s[i][j]==1) {
				x=i;y=j;	
			}
		}
	}
	int sum=0;
	if(x<2){
		sum+=2-x;
	}else{
		sum+=x-2;
	}
	if(y<2){
		sum+=2-y;
	}else{
		sum+=y-2;
	}
	printf("%d\n",sum);
	return 0;
}
