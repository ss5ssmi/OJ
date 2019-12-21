#include<iostream>
using namespace std;
int main(){
	int t, x, y;
	cin >> t;
	while(t--){
		cin >> x >> y;
		if(((x == 3 || x == 1) && y <= x) || (x == 2 && y <= 3) || x > 3) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
