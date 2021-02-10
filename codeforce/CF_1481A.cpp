#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int x, y, l = 0, r = 0, u = 0, d = 0, flag1 = 0, flag2 = 0;
		char s[100001];
		scanf("%d%d", &x, &y);
		scanf("%s", &s);
		for(int i=0;s[i]!='\0';i++){
			if(s[i]=='L') l--;
			else if(s[i]=='R') r++;
			else if(s[i]=='U') u++;
			else d--;
			if(l<=x && r>=x) flag1 = 1;
			if(d<=y && u>=y) flag2 = 1;
		}
		if(flag1 && flag2) printf("YES\n");
		else printf("NO\n");
	} 
	return 0;
}
