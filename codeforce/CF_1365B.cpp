#include<stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a[500], b[500];
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int flagTypeZero = 0, flagTypeOne = 0;
		for(int i=0;i<n;i++){
			scanf("%d", &b[i]);
			if(b[i]==1) flagTypeOne = 1;
			else flagTypeZero = 1;
		}
		int flag = 0;
		for(int i=0;i<n-1;i++){
			if(a[i] > a[i+1]){
				flag = 1;
				break;
			}
		}
		if(!flag || (flagTypeOne && flagTypeZero)) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
