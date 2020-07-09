#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b, n, cnt = 0;
		scanf("%lld%lld", &a, &b);
		if(a<b) n=a,a=b,b=n;
		while(1){
			if(a==b) break;
			if(b>a) {cnt=-1;break;}
			b*=2,cnt++;
		}
		if(cnt<0) printf("-1\n");
		else printf("%lld\n", cnt%3?(cnt/3)+1:(cnt/3));
	}
	return 0;
} 
