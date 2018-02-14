#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,x,y,z,m=0;
	cin>>a>>b>>c>>x>>y>>z;
	if(a>=x && b>=y && c>=z){
		printf("Yes\n");
	}else{
		int ta=0,tb=0,tc=0;
		if(a-x>0) ta=a-x;
		else m+=abs(a-x);
		if(b-y>0) tb=b-y;
		else m+=abs(b-y);
		if(c-z>0) tc=c-z;
		else m+=abs(c-z);
		if(((ta/2)+(tb/2)+(tc/2))>=m){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}
