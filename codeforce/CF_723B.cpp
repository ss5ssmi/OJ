#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,lon=0,num=0,flag=0;
	string s;
	cin>>n>>s;
	for(int i=0; i<n; i++) {
		int j,tmp=0;
		if(s[i]=='(') flag=1;
		if(s[i]!='_' && s[i]!='(' && s[i]!=')') {
			for(j=i; s[j]!='_' && s[j]!='(' && s[j]!=')' && j<n; j++) {
				tmp++;
			}
			if(flag) num++;
			i=j-1;
//			printf("%d %d\n",tmp,flag);
			if(!flag) lon=max(lon,tmp);
		}
		if(s[i]==')') flag=0;
	}
	printf("%d %d\n",lon,num);
	return 0;
}
