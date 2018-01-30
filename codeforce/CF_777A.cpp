#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x,t[6][3]={0,1,2,1,0,2,1,2,0,2,1,0,2,0,1,0,2,1};
	cin>>n>>x;
	cout<<t[n%6][x];
	return 0;
}
