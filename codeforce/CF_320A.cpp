#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[11];
	int flag=1;
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]!='1' && s[i]!='4'){
			flag=0;
			break;
		}
		if(s[i]=='4'){
			if(s[i-1]!='1' && (s[i-1]=='4' && s[i-2]!='1') || i==0){
				flag=0;
				break;
			}
		}
	} 
	printf("%s\n",flag?"YES":"NO");
	return 0;
}
