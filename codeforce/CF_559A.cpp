#include<bits/stdc++.h>
using namespace std;
int main() {
	int a[6];
	for(int i=0;i<6;i++){
		cin>>a[i];
	}
	long long ans=pow((a[0]+a[1]+a[2]),2)-pow(a[0],2)-pow(a[2],2)-pow(a[4],2);
	printf("%lld\n",ans);
	return 0;
}
