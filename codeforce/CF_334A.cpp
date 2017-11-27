#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n*n/2;){
		for(int j=1;j<=n/2;j++){
			printf("%d %d",i,n*n-i+1);
			if(j==n/2) printf("\n");
			else printf(" ");
			i++;
		}
	}
	return 0;
}
