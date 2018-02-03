#include<bits/stdc++.h>
using namespace std;
int find(int h,int m) {
	int t1,t2,t3,t4,f1,f2,f3,f4;
	t1=(h/10)%10;
	t2=h%10;
	t3=(m/10)%10;
	t4=m%10;
	f1=t4;
	f2=t3;
	f3=t2;
	f4=t1;
	if(t1==f1 && t2==f2 && t3==f3 && t4==f4) return 1;
	return 0;
}
int main() {
	int h,m,ta,tb,cnt=0;
	scanf("%d:%d",&h,&m);
	ta=h,tb=m;
	while(!find(h,m)) {
		m++;
		cnt++;
		if(m>59) {m=0;h++;}
		if(h>23) {h=0;}
	}
	cout<<cnt;
	return 0;
}
