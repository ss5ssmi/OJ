#include<iostream>
using namespace std;
int main(){
	int n, c, k;
	cin >> n;
	while(n--){
		cin >> c >> k;
		if(c == 1){
			cout << k * k << endl;
		}else if(k == 1){
			cout << k << endl;
		}else{
			int t = k%c, cnt = 0;
			cnt += (c - t) * (k / c) * (k / c);
			cnt += t * ((k / c) + 1) * ((k / c) + 1);
			cout << cnt << endl;
		} 
	}
}
