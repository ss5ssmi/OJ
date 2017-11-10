#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,y,t,a,b,v;
	scanf("%d%d",&x,&y);
	scanf("%d",&t);
	double time=1e9;
	while(t--){
		scanf("%d%d%d",&a,&b,&v);
		double tmp=pow((pow((a-x),2)+pow((b-y),2)),0.5)/v*1.0;
		if(tmp<time){
			time=tmp;
		}
	}
	printf("%.20lf\n",time);
	return 0;
}
