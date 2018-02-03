#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	int x=0,y=0;
	cin>>s;
	if(s.size()%2!=0) {
		printf("-1\n");
		return 0;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]=='L') y--;
		if(s[i]=='R') y++;
		if(s[i]=='U') x++;
		if(s[i]=='D') x--;
	}
	int tmp=abs(0-x)+abs(0-y);
	printf("%d\n",tmp/2);
	return 0;
}
