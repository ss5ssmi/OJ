#include<bits/stdc++.h>
using namespace std;
bool pri(int t){
	for(int i=2;i<=sqrt(t);i++){
		if(t%i==0) return 0;
	}
	return 1;
}
int main() {
	int n,ans[1000],cnt=0;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(!pri(i)) continue;
		int t=i;
		while(t<=n) {
			ans[cnt++]=t;
			t*=i;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		printf("%d",ans[i]);
		printf("%c",i==cnt-1?'\n':' ');
	}
	return 0;
}
