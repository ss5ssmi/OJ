#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int len = s.length();
		if(len >=2 && s.substr(len - 2, len) == "po")
			cout << "FILIPINO" << endl;
		else if(len >= 4 && s.substr(len - 4, len) == "masu" || s.substr(len - 4, len) == "desu")
			cout << "JAPANESE" << endl;
		else if(len >= 5 && s.substr(len - 5, len) == "mnida")
			cout << "KOREAN" << endl;
	}
}
