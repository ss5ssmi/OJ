#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
	int t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		int res[26] = {0};
		for(int i=0;i<s.length() - 1;i++){
			if(s[i] == s[i+1]) s[i] = s[i+1] = 0;
		}
		for(int i=0;i<s.length();i++){
			res[s[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			if(res[i]) printf("%c",'a' + i);
		}
		cout << endl;
	}
}
