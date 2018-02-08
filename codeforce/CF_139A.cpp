#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[8];
	cin>>n;
	for(int i=1; i<8; i++) {
		cin>>s[i];
	}
	int i=1;
	while(n) {
		if(i>7) i=1;
		if(n) n-=s[i++];
		if(n<=0) {printf("%d\n",i-1);break;} 
	}
	return 0;
}
