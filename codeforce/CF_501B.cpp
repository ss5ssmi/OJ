#include<bits/stdc++.h>
using namespace std;
int main() {
	string k[1010],v[1010];
	string a,b;
	int n,cnt=0;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a>>b;
		int j;
		for(j=0; j<cnt; j++) {
			if(v[j]==a) {v[j]=b;goto next;}
		} 
		k[j]=a;v[j]=b;cnt++;
		next:;
	}
	printf("%d\n",cnt);
	for(int i=0; i<cnt; i++) {
		cout<<k[i]<<" "<<v[i]<<endl;
	}
	return 0;
}
