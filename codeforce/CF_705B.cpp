#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a[100000];
	long long tmp=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		tmp+=a[i]-1;
		cout<<(tmp%2==0?2:1)<<endl;
	}
	return 0;
}
