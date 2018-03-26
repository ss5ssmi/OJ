#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int len;
	cin>>len>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='U' && s[i+1]=='R' || s[i]=='R' && s[i+1]=='U'){
			i++;
			len--;
		}
	}
	cout<<len;
	return 0;
}
