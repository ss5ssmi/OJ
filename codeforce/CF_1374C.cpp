#include<stdio.h>
int min(int a, int b){return a<b?a:b;}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, o = 0, c = 0;
		char s[50];
		scanf("%d%s", &n, &s);
		for(int i=0;i<n;i++){
			if(s[i] == '('){
				o++;
			}else{
				if(o<=0){
					c++;
				}else{
					o--;
				}
			}
		}
		printf("%d\n", min(o, c));
	}
	return 0;
}
