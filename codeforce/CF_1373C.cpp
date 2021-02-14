#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[1000000];
		scanf("%s", s);
		int len = strlen(s), n = 0, cnt[100000];
		long long res = 0;
		for(int i=0;i<len;i++){
			if(s[i] == '+') n++;
			else n--;
			cnt[i] = n;
		}
		for(int i=0;i<len;i++){
			if(cnt[i] + i > 0){
				for(int j=0;j<len;j++){
					if(i+cnt[j] < 0){
						res++;
					} 
				}
			}else{
				res+=(i+1);
			}
		}
		printf("%lld\n", res+len);
	}
	return 0;
}
