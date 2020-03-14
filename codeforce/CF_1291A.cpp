#include<stdio.h>
int main(){
	int t, n, s[3000];
	scanf("%d",&t);
	while(t--){
		int odd = 0, even = 0,sum = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%1d",&s[i]);
			sum += s[i];
			if(s[i]%2 == 0) even += 1;
			else odd += 1;
		}
		s[n]=-1;
		if(odd<2){
			printf("-1\n");
		}else{
			for(int i=n-1;i>=0;i--){
				if(s[i]%2==0){
					s[i] = -1;
				}else{
					if(odd%2==1){
						s[i]=-1;
						odd--;
					}else{
						break;
					}
				}
			}
			for(int i=0;i<n;i++){
				if(s[i] != -1) printf("%d",s[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
