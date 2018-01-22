#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
map<int,int>::iterator it;
int main() {
	int n,t;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>t;
		m[t]++;
	}
	if(m.size()>3) {
		cout<<"NO"<<endl;
	} else {
		int maxx=0,minn=1e9+1,midd=-1;
		it=m.begin();
		minn=it->first;
		it++;
		midd=it->first;
		it++;
		maxx=it->first;
//		printf("%d %d %d\n",maxx,minn,midd);
//		printf("%d %d %d\n",t1!=t3,(maxx-midd+minn)!=midd,(maxx+minn)%2!=0);
		if(m.size()==3 && (maxx-midd+minn)!=midd) {cout<<"NO"<<endl;}
		else cout<<"YES"<<endl;
	}
	return 0;
}
