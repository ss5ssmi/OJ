#include<stdio.h>
int main(){
	int n, m, q, y;
	char s[30][20], t[30][20];
	scanf("%d%d",&n, &m);
	for(int i=1;i<=n;i++){
		scanf("%s",&s[i]);
	}
	for(int i=1;i<=m;i++){
		scanf("%s",&t[i]);
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d",&y);
		int a = y%n, b = y%m;
		if(a == 0) a = n;
		if(b == 0) b = m;
		printf("%s%s\n",s[a],t[b]);
	}
	return 0;
} 
