#include<stdio.h>
int max(int a, int b){return a>b?a:b;}
int min(int a, int b){return a<b?a:b;}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[50], cnt = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n-1;i++){
			int maxa = max(a[i], a[i+1]), mina = min(a[i], a[i+1]);
			if(mina*2<maxa){
				while(mina*2 < maxa){
					mina*=2;
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
