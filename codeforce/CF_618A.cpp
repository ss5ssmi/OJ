#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000]={0};
	cin>>n;
	int l=0;
	while(n--) {
		s[l++]=1;
		while(l>1 && s[l-1]==s[l-2]) {
			s[l-2]++;
			s[l-1]=0;
			l--;
		}
	}
	for(int i=0;i<l;i++){
		if(s[i]>0) printf("%d",s[i]);
		if(i!=l-1) printf(" ");
	}
	return 0;
}
