#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,flag=0,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t%2==1){
			flag=1;
		}
	}
	if(flag) printf("First\n");
	else printf("Second\n");
	return 0;
}
