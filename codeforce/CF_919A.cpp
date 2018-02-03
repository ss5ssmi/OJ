#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	double minn=100.0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		double a,b;
		cin>>a>>b;
		minn=min(minn,a/b*1.0);
	}
	printf("%.8lf\n",minn*(m*1.0));
	return 0;
}
