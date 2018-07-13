#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,ans=0,s[5]={1,5,10,20,100};
	cin>>n;
	for(int i=4;i>=0;i--){
		if(n/s[i]>0){
			ans+=n/s[i];
			n-=(n/s[i]*s[i]);
		}
	}
	printf("%d\n",ans);
	return 0;
}
