#include<bits/stdc++.h>
using namespace std;
int main() {
	int m,n,a[100],b[100];
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	for(int i=0; i<m; i++) {
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	for(double i=a[0]*2; i<b[0]; i++) {
		if(i>=a[n-1]) {
			printf("%.0lf\n",i);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
