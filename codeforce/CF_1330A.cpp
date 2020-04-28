#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x, a, v, m[101]={0};
		scanf("%d %d", &n, &x);
		for(int i=0;i<n;i++){
			scanf("%d", &a);
			m[a] = 1;
		}
		for(int i=1;i<101;i++){
			if(m[i]==0 && x<=0) break;
			v=i;
			x-=(m[i]==0)?1:0;
		}
		printf("%d\n", v+x);
	}
	return 0;
}
