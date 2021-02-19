#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, flag = 1;
		int h[110];
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &h[i]);
		}
		for(int i=0;i<n;i++){
			if(h[i]<i){
				flag = 0;
				break;
			}else{
				h[i+1]=(h[i+1]+h[i]-i)>1e9?1e9:(h[i+1]+h[i]-i);
			}
		}
		printf("%s\n", flag?"YES":"NO");
	}
	return 0;
}
