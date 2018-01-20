#include<bits/stdc++.h>
using namespace std;
int main() {
	int d,l,v1,v2;
	double ans=0.0;
	cin>>d>>l>>v1>>v2;
	ans=(l-d)*1.0/(v1+v2);
	printf("%.10lf\n",ans);
	return 0;
}
