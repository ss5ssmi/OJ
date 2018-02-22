#include<bits/stdc++.h>
using namespace std;
string s;
bool check(char t){
	if(t=='a' || t=='e' || t=='i' || t=='o' || t=='u' || t=='y') return 1;
	return 0;
}
int main() {
	int n;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		if(!check(s[i])) printf("%c",s[i]);
		else{
			printf("%c",s[i]);
			while(check(s[i+1])) i++;
		}
	}
	return 0;
}
