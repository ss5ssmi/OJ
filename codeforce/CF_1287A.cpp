#include<iostream>
using namespace std;
int main(){
	int t,k;
	cin >> t;
	while(t--){
		cin >> k;
		string s;
		int max = 0,cnt = 0,flag = 0;
		cin >> s;
		for(int i=0;i<k;i++){
			if(s[i] == 'A') {
				flag = 1;
				max = max > cnt ? max : cnt;
				cnt = 0;
			} else if(flag){
				cnt++;
			}
		}
		max = max > cnt ? max : cnt;
		cout << max << endl;
	}
}
