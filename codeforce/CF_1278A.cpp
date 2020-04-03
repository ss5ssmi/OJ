#include<stdio.h>
#include<string.h>
int indexOf(char *str, int len, char trgt){
	for(int pos = 0; pos < len; pos++){
		if( *(str+pos) == trgt){
			return pos;
		}
	}
	return -1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char p[110], h[110], t[110];
		scanf("%s", &p);
		scanf("%s", &h);
		int lp = strlen(p), lh = strlen(h), flag = 0;
		for(int i=0;i<=lh-lp;i++){
			strcpy(t, p);
			int cnt = 0;
			for(int j=i;j<i+lp;j++){
				int pos = indexOf(t, lp, h[j]);
				if( pos > -1 ){
					t[pos] = '#';
					cnt++;
				}
			}
			if(cnt == lp) flag = 1;
			if(flag) break;
		}
		if(flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
