#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[110];
	cin>>s;
	int l=strlen(s),flag=0,tmp=0;
	for(int i=l-1;i>=0;i--){
		if(tmp>=6 && s[i]=='1'){
			tmp=0;
			flag=1;
		}
		if(s[i]=='0'){
			tmp++;
		}
	}
	printf("%s\n",flag?"yes":"no");
	return 0;
}
