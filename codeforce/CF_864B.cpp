#include<bits/stdc++.h>
using namespace std;
int main() {
	int l;
	string s;
	set<char> st;
	cin>>l>>s;
	int ans=0;
	for(int i=0; i<l; i++) {
		if(s[i]>='a' && s[i]<='z') {
			st.insert(s[i]);
		} else {
			ans=max(ans,(int)st.size());
			st.clear();
		}
	}
	ans=max(ans,(int)st.size());
	cout<<ans<<endl;
	return 0;
}
