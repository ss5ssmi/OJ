#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, a[100];
		scanf("%d%d", &n, &m);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			m-=a[i];
		}
		if(m==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
