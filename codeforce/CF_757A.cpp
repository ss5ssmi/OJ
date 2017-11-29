#include<bits/stdc++.h>
using namespace std;
int main() {
	char w[100000];
	int B=0,u=0,l=0,b=0,a=0,s=0,r=0;
	scanf("%s",w);
	for(int i=0;i<strlen(w);i++){
		if(w[i]=='B') B++;
		else if(w[i]=='u') u++;
		else if(w[i]=='l') l++;
		else if(w[i]=='b') b++;
		else if(w[i]=='a') a++;
		else if(w[i]=='s') s++;
		else if(w[i]=='r') r++;
	} 
	int ans=min(a/2,min(u/2,min(b,min(l,min(B,min(s,r))))));
	printf("%d\n",ans);
	return 0;
}

