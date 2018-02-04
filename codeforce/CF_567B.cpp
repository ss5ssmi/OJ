#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,no,ans=0;
	char comm;
	set<int> room;
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>comm>>no;
		if(comm=='+') {
			room.insert(no);
		} else {
			if(room.find(no)!=room.end()) room.erase(no);
			 else ans++;
		}
		int size=room.size();
		ans=max(ans,size);
	}
	cout<<ans;
	return 0;
}	
