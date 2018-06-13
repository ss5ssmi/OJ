#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s[100];
	map<int,int> v;
	map<int,int>::iterator it;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		int flag = 0;
		for(it=v.begin();it!=v.end();it++){
			if(s[i]==it->second){
				flag = 1;
				break;
			}
		}
		if(!flag){
			v[i+1]=s[i];
		}
	}
	if(v.size()>=k){
		printf("YES\n");
		for(it=v.begin();it!=v.end(),k;it++,k--){
			cout<<it->first;
			if(k) printf(" ");
		}
	}else{
		printf("NO\n");
	}
	return 0;
}
