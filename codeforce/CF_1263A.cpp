#include<iostream>
using namespace std;
int max(int a, int b){return a > b ? a : b;}
int min(int a, int b){return a < b ? a : b;}
int main(){
	int t, r, g, b;
	cin >> t;
	while(t--){
		cin >> r >> g >> b;
		int maxv = max(r, max(g, b)), minv = min(r, min(g, b)), midv = r + g + b - maxv - minv, cnt = 0;
		cnt = min(minv, maxv - midv);
		minv -= cnt;
		maxv -= cnt;
		if(minv > 0 && minv % 2 == 0){
			maxv -= minv / 2;
			midv -= minv / 2;
		}else if(minv > 0 && minv % 2 == 1){
			maxv -= (minv / 2) + 1;
			midv -= minv / 2;
		}
		cout << cnt + minv + min(maxv, midv) << endl;
	}
} 
