#include<bits/stdc++.h>
using namespace std;
int main() {
	int r,x,y,x1,y1;
	scanf("%d%d%d%d%d",&r,&x,&y,&x1,&y1);
	double l=sqrt(pow(x1-x,2)+pow(y1-y,2));
	r*=2;
//	printf("%.2lf\n",l/r-int(l/r);
	if(l/r-int(l/r)>-1e15 && l/r-int(l/r)!=0.0)
		printf("%d\n",int(l/r)+1);
	else
		printf("%d\n",int(l/r));
	return 0;
}
