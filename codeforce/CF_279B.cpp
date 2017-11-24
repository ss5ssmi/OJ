#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t,a[100000];
	int sum=0,k=0,ans=0;
	scanf("%d%d",&n,&t);
	for(int i=0; i<n; i++) {
		scanf("%d",&a[i]);
		sum+=a[i];
		while(sum>t){
			sum-=a[k];
			k++;
		}
		ans=max(ans,i-k+1);
	}
	printf("%d\n",ans);
	return 0;
}
