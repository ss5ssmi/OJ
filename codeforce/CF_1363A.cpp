#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x, a[1000];
		int odd = 0, even = 0;
		scanf("%d%d", &n, &x);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
			if(a[i]%2==1) odd++;
			else even++;
		}
		if(odd == 0){
			printf("No\n");
			continue;
		}
		if(x >= odd){
			if( x-(odd%2==1?odd:odd-1) > even ) printf("No\n");
			else printf("Yes\n");
		}else{
			if( x%2==0 && even == 0 ) printf("No\n");
			else printf("Yes\n");
		}
	} 
	return 0;
}
