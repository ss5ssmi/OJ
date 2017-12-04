#include<bits/stdc++.h>
using namespace std;
int main() {
	char n[10];
	int sum=0;
	scanf("%s",&n);
	for(int i=0; i<strlen(n); i++) {
		sum=max(sum,n[i]-'0');
	}
	printf("%d\n",sum);
	for(int i=1; i<=sum; i++) {
		int flag=0;
		for(int j=0; j<strlen(n); j++) {
			if(n[j]>'0') {
				printf("1");
				n[j]--;
				flag=1;
			} else if(flag) printf("0");
		}
		printf(" ");
	}
	return 0;
}
