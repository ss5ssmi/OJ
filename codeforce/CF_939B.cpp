#include<bits/stdc++.h>
using namespace std;
int main() {
	int k,tmp;
	__int64 n,a[100010],minn=1e18;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		cin>>a[i];
		if(n%a[i]<minn){
			minn=n%a[i];
			tmp=i;
		}
	}
	printf("%d %I64d\n",tmp+1,n/a[tmp]);
	return 0;
} 
