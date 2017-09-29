#include<stdio.h>
#include<string.h>
char map[5][7];
char cmd[1001];
int main()
{
	int kase=0;
	while(gets(map[0])) {
		if(map[0][0]=='Z') break;
		for(int i=1; i<5; i++)
			gets(map[i]);
		int s_x=0,s_y=0;
		for(int i=0; i<5; i++) {
			for(int j=0; j<5; j++) {
				if(map[i][j]<'A' || map[i][j]>'Z') {
					s_x=i;
					s_y=j;
					break;
				}
			}
		}
		int count=0;
		while(~scanf("%c",&cmd[count]))
			if(cmd[count]!='0') count++;
			else break;
		cmd[count]=0;
		getchar();

		int flag=0,x=s_x,y=s_y;
		for(int i=0; cmd[i]; i++) {
			switch(cmd[i]) {
				case 'A':
					x=s_x-1;
					y=s_y;
					break;
				case 'B':
					x=s_x+1;
					y=s_y;
					break;
				case 'L':
					x=s_x;
					y=s_y-1;
					break;
				case 'R':
					x=s_x;
					y=s_y+1;
					break;
			}
			if(x<0 || x>4 || y<0 || y>4) {
				flag=1;
				break;
			} else {
				map[s_x][s_y]=map[x][y];
				map[x][y]=' ';
				s_x=x;
				s_y=y;
			}
		}
		if(kase++) printf("\n");
		printf("Puzzle #%d:\n",kase);

		if(flag) {
			printf("This puzzle has no final configuration.\n");
		} else {
			for(int i=0; i<5; i++) {
				for(int j=0; j<5; j++) {
					printf("%c",map[i][j]);
					if(j!=4) printf(" ");
				}
				printf("\n");
			}
		}
	}
	return 0;
}
