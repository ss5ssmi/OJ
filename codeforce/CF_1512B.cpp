#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x1, y1, x2, y2;
		char map[400][400];
		x1=x2=y1=y2=-1;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%s", &map[i]);
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(map[i][j]=='*'){
					if(x1==-1){
						x1=i,y1=j;
					} else{
						x2=i,y2=j;
					}
				}
			}
		}
		if(x1!=x2 && y1!=y2){
			map[x1][y2]=map[x2][y1]='*';
		}else if(x1==x2){
			if(x1==0){
				map[x1+1][y1]=map[x2+1][y2]='*';
			}else{
				map[x1-1][y1]=map[x2-1][y2]='*';
			}
		}else if(y1==y2){
			if(y1==0){
				map[x1][y1+1]=map[x2][y2+1]='*';
			}else{
				map[x1][y1-1]=map[x2][y2-1]='*';
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("%c", map[i][j]);
			}
			printf("\n");
		}
	}
}
