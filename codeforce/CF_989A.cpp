#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int l = s.length();
	int flag = 0;
	for(int i=0;i<l;i++){
		if(s[i]+s[i+1]+s[i+2] == 198 && s[i]!=s[i+1] && s[i]!=s[i+2]){
			flag = 1;
		}
	}	
	printf("%s\n",flag?"YES":"NO");
	return 0;
}
