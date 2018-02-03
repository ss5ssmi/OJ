#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,bx,by,s[10],t;
	long long tx=0,ty=0;
	cin>>n>>bx;
	memset(s,0,sizeof(s));
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	t=n;
	for(int i=0;i<t;i++){
		tx+=s[i]*1.0*pow(bx,--n);
	}
	memset(s,0,sizeof(s));
	cin>>n>>by;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	t=n;
	for(int i=0;i<t;i++){
		ty+=s[i]*pow(by,--n);
	}
	if(tx==ty) printf("=\n");
	else if(tx>ty) printf(">\n");
	else printf("<\n");
	return 0;
}
