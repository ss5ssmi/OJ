#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int l = s.length();
	int flag = 0;
	for(int i=0; i<l; i++) {
		if(s[i]!=s[0]) {
			flag = 1;
			break;
		}
	}
	int flag1 = 0;
	for(int i=0,j=l-1; i<j; i++,j--) {
		if(s[i]!=s[j]) {
			flag1 = 1;
			break;
		}
	}
	if(!flag) {
		printf(" 0\n");
	} else {
		if(!flag1) {
			printf("%d\n",l-1);
		} else {
			printf("%d\n",l);
		}
	}
	return 0;
}
