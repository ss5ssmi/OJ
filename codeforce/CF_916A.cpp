#include<bits/stdc++.h>
using namespace std;
int main() {
	int x,h,m,tmp=0;
	cin>>x>>h>>m;
	while(h%10!=7 && (h/10)%10!=7 && m%10!=7 && (m/10)%10!=7) {
		m-=x;
		if(m<0) {h--;m=60+m;}
		if(h<0) {h=23;} 
		tmp++;
	}
	cout<<tmp;
	return 0;
}
