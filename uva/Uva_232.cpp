#include<stdio.h>
#include<string.h>
char map[12][12];
int size[12][12];
int main()
{
	int r,c,kase=1;
	while(scanf("%d",&r)!=EOF && r) {
		int p=1;
		scanf("%d",&c);
		memset(size,0,sizeof(size));
		for(int i=0; i<r; i++) {
			scanf("%s",&map[i]);
		}
		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++) {
				if(map[i][j]=='*') continue;
				if(!map[i-1][j] || !map[i][j-1] || map[i-1][j]=='*' || map[i][j-1]=='*') size[i][j]=p++;
			}
		}
		if(kase>1) printf("\n");
		printf("puzzle #%d:\n",kase++);

		printf("Across\n");
		for(int i=0; i<r; i++) {
			int j=0;
			while(j<c) {
				if(size[i][j]==0 || map[i][j]=='*') {
					j++;
					continue;
				}
				printf("%3d.%c",size[i][j],map[i][j]);
				j++;
				while(j<c && map[i][j]!='*') {
					printf("%c",map[i][j]);
					j++;
				}
				printf("\n");
			}
		}

		printf("Down\n");
		for(int i=0; i<r; i++) {
			for(int j=0; j<c; j++) {
				if(size[i][j]==0){
					continue;
				}
				printf("%3d.%c",size[i][j],map[i][j]);
				size[i][j]=0;
				int k=i+1;
				while(k<r && map[k][j]!='*'){
					printf("%c",map[k][j]);
					size[k][j]=0;
					k++;
				}
				printf("\n");
			}
		}
	}
	return 0;
}
