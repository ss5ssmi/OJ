#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[1010],it=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		if(!it && s[i]==1) it=i;
	}
	int ans=0;
	for(int i=it;i<=n;i++){
		if(s[i]==1){
		    printf("%d %d\n",it,i);
			ans+=(i-it>1)?2:1;
			it=i;
		}
	}
	cout<<ans;
	return 0;
}
