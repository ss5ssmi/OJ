#include<bits/stdc++.h>
using namespace std;
int main() {
	int hh,mm;
	double h,d,c,n;
	cin>>hh>>mm;
	cin>>h>>d>>c>>n;
	int t=hh*60+mm;
	if(hh<20){
		printf("%lf\n",min(ceil((d*(1200-t)+h)/n)*c*0.8,ceil(h/n)*c*1.0));
	}else{
		printf("%lf\n",ceil(h/n)*c*0.8);
	}
	return 0;
}
