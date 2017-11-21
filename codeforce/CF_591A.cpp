#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,p,q;
	scanf("%d%d%d",&n,&p,&q);
	double s=p*1.0/(p+q)*1.0;
	printf("%.8lf\n",s*n*1.0);
	return 0;
}
