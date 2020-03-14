#include<stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int a,cnt = 0;
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			if(a%2==1) cnt++;
		}
		if(cnt%2==1 || cnt < n && cnt) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
