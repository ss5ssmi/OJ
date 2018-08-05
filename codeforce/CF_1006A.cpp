#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[1000],maxx=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		maxx = max(maxx,s[i]);
	}
	for(int i=0;i<n;i++){
		if(s[i]%2==0){
			s[i]--;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d",s[i]);
		if(i!=n-1) printf(" ");
	}
	return 0;
}
