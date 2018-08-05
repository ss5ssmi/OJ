#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,c[1000],a[1000];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	int cnt=0;
	for(int i=0,j=0;i<n && j<m;i++){
		if(a[j]>=c[i]){
			j++;
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}
