#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int l=0,p=0;
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]=='-') l++;
		else p++;
	}
	if(p==0 || l%p==0) printf("YES\n");
	else printf("NO\n");
	return 0;
}
