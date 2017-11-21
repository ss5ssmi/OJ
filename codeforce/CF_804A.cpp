#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,cost=0;
	scanf("%d",&n);
	if(n==1){
		printf("0\n");
		return 0;
	}
	for(int i=2,j=n;i<=n/2;i++,j--){
		cost+=(i+j)%(n+1);
	} 
	if(n%2!=0) cost+=((n/2)+1+(n/2)+2)/(n+1);
	printf("%d\n",cost);
	return 0;
}
