#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[15];
	scanf("%s",s);
	int l=strlen(s),flag=0;
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i]){
			flag++;
		}
	}
	if(l%2==0){
		printf("%s\n",flag==1?"YES":"NO");
	}else{
		printf("%s\n",flag<=1?"YES":"NO");
	} 
	return 0;
} 
