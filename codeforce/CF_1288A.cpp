#include<stdio.h>
#include<math.h>
int main(){
	int t, n, d;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&d);
		int flag = 0;
		if(n>=d){
			 printf("YES\n");
			 continue;
		}
		for(int i=1;i<n;i++){
			int x = i + ceil( double(d) / double(i+1) );
			if(n>=x){
				flag = 1;
				printf("YES\n");
				break;
			}
		}
		if(!flag) printf("NO\n");
	}
	return 0;
}
