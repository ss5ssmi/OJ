#include<stdio.h>
int main() {
	int n,k=14;
	int a[1000]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int s[1005]={0};
	for(int i=1;i<=1000;i++){
		for(int j=0;j<k;j++){
			if(i == a[j] || i%a[j] == 0){
				a[k++] = i;
				s[i] = 1;
				break;
			}
		}
	} 
	while(scanf("%d", &n)!=EOF) {
		if(s[n] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

