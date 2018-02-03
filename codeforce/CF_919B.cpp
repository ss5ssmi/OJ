#include<bits/stdc++.h>
using namespace std;
bool f(int x){
	int sum=0;
	while(x){
		sum+=x%10;
		x/=10;
	}
	return sum==10;
}
int main() {
	int n,t=1,s[10000];
	for(int i=19;i<=100000000;i++){
		if(f(i)){
			s[t++]=i;
		}
		if(t>10000) break;
	}
	cin>>n;
	cout<<s[n];
	return 0;
}
