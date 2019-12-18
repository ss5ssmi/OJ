#include<iostream>
using namespace std;
int min(int a, int b){return a < b ? a : b;}
int max(int a, int b){return a > b ? a : b;}
int main(){
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	int cntf = 0, cnts = 0;
	if(f > e){
		cnts = min(b, min(c, d));
		d-=cnts;
		cntf = min(a, d);
	}else{
		cntf = min(a, d);
		d-=cntf;
		cnts = min(b, min(c, d));
	}
	cout << (cntf * e) + (cnts * f) << endl;
}
