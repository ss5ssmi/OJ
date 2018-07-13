#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000];
	set<int> tmp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(s[i]!=0) tmp.insert(s[i]);
	}
	printf("%d\n",tmp.size());
	return 0;
}
