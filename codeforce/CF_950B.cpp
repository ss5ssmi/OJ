#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,x[100010],y[100010];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	for(int i=1;i<=m;i++){
		cin>>y[i];
	}
	int tx=0,ty=0,ans=0;
	for(int i=1,j=1;i<=n && j<=m;){
   		if(tx<ty){
			tx+=x[i++];
		}else if(tx>ty){
			ty+=y[j++];
		}else{
			tx=x[i++],ty=y[j++];
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}

