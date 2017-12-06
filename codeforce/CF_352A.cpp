#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[1000],flag=0,tmp0=0,tmp5=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&s[i]);
		if(s[i]==0) tmp0++;
		else tmp5++;
	}
	if(!tmp0) {
		printf("-1\n");
	} else {
		for(int i=tmp5; i>=0; i--) {
			if(i%9==0 && i!=0) {
				flag=1;
				for(int j=0; j<i; j++) {
					printf("5");
				}
				break;
			}
		}
		if(flag) {
			for(int j=0; j<tmp0; j++) {
				printf("0");
			}
			printf("\n");
		}else{
			printf("0\n");
		}
	}
	return 0;
}
