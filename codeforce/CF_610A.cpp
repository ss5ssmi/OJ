#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=0;
	scanf("%d",&n);
	if(n%2!=0){
		printf("0\n");
		return 0;
	}
	for(int i=1;i<=n/4;i++){
		if(2*i!=(n-2*i)) ans++;
	}
	printf("%d\n",ans);
	return 0;
}
