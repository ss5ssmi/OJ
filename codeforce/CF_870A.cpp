#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,a[10],b[10];
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<m; i++) {
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int minn=1e9;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(a[i]==b[j]) {
				cout<<a[i];
				return 0;
			}else{
				int ta=a[i]*10+b[j],tb=b[j]*10+a[i];
				minn=min(minn,min(ta,tb));
			}
		}
	}
	cout<<minn;
	return 0;
}
