#include<bits/stdc++.h>
#include<map>
using namespace std;
int main() {
	map<string,int> s1,s2;
	int n,source[1010],maxx=0;
	string name[1010];
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		cin>>name[i]>>source[i];
		s1[name[i]]+=source[i];
	}
	for(int i=0;i<n;i++){
		if(s1[name[i]]>maxx){
			maxx=s1[name[i]];
		}
	}
	for(int i=0;i<n;i++){
		s2[name[i]]+=source[i];
		if(s1[name[i]]>=maxx && s2[name[i]]>=maxx){
			cout<<name[i]<<endl;
			break;
		}
	}
	return 0;
}
