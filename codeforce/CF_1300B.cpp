#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t,n,num;
	vector<int> a;
	cin >> t;
	while(t--){
		a.clear();
		cin >> n;
		for(int i=0;i<(2 * n);i++){
			cin >> num;
			a.push_back(num);
		}
		sort(a.begin(), a.end());
		cout << a[n] - a[n - 1] << endl;
	}
	return 0;
}
