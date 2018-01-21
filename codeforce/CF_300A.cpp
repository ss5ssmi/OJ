#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100],less=0,grea=0;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>s[i];
		if(s[i]<0) less++;
		if(s[i]>0) grea++;
	}
	if(less%2==0) {
		if(grea>0) {
			printf("1 %d\n",s[0]);
			printf("%d",grea);
			for(int i=less+1; i<n; i++) {
				printf(" %d",s[i]);
			}
			printf("\n");
			printf("%d 0",less);
			for(int i=1;i<less;i++){
				printf(" %d",s[i]);
			}
			printf("\n");
		} else {
			printf("1 %d\n",s[0]);
			printf("%d",less-2);
			for(int i=2; i<less; i++) {
				printf(" %d",s[i]);
			}
			printf("\n");
			printf("2 0 %d\n",s[1]);
		}
	} else {
		if(grea>0) {
			printf("1 %d\n",s[0]);
			printf("%d",n-2);
			for(int i=1; i<n; i++) {
				if(s[i]==0) continue;
				printf(" %d",s[i]);
			}
			printf("\n");
			printf("1 0\n");
		} else {
			printf("1 %d\n",s[0]);
			printf("%d",n-2);
			for(int i=1; i<n-1; i++) {
				printf(" %d",s[i]);
			}
			printf("\n");
			printf("1 0\n");
		}
	}
	return 0;
}
