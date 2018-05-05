#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n;
	cin>>s;
	int z=0,o=0;
	for(int i=0;i<n;i++){
		if(s[i]=='0') z++;
		else if(s[i]=='1') o++;
	}
	if(o) printf("1");
	while(z--) printf("0");
	return 0;
}
