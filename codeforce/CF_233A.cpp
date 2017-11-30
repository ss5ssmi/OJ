#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	if(n%2!=0){
		printf("-1\n");
	}else {
		for(int i=2;i<=n;i+=2){
			printf("%d %d",i,i-1);
			printf("%s",i==n?"\n":" ");
		}
	}
	return 0;
}
