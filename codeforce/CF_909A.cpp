#include<bits/stdc++.h>
using namespace std;
int main() {
	string f,l,s="";
	int flag=0;
	cin>>f>>l;
	for(int i=0;i<f.size();i++){
		if(l[0]<=f[i] && s.size()){
			s+=l[0];
			flag=1;
			break;
		}
		s+=f[i];
	}
	if(!flag) s+=l[0];
	cout<<s<<endl;
	return 0;
}
