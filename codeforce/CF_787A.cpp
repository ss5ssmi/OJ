#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d,ans=1e9;
	cin>>a>>b>>c>>d;
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=1000;j++){
			if((b+a*i)==(d+c*j)){
				ans=min(ans,b+a*i);
				printf("%d\n",ans);
				return 0;
			}
		}
	}
	if(ans==1e9) printf("-1\n");
	return 0;
}
