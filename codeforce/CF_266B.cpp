#include<stdio.h>
#include<string.h>
int main() {
	int n,t;
	char q[50];
	while(scanf("%d %d\n",&n,&t)!=EOF) {
		gets(q);
		while(t --) {
			for(int i = 0; i < n; ) {
				if(q[i] == 'B') {
					if(q[i + 1] == 'G') {
						q[i] = 'G';
						q[i + 1] = 'B';
						i += 2;
					} else
						i ++;
				} else
					i ++;
			}
		}
		puts(q);
	}
	return 0;
}
