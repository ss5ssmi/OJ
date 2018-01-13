#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k[26]={0},ans=0;
	char key,door;
	cin>>n;
	for(int i=0;i<n-1;i++){
		cin>>key>>door;
		k[key-'a']++;
		if(!k[door-'A']){
			ans++;
		}else{
			k[door-'A']--;
		}
	}	
	cout<<ans;
	return 0;
}
