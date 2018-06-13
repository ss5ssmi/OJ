#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	string s;
	cin>>n>>s;
	int cnt=0;
	for(int i=0;i<n;i++){
		cnt+=s[i]=='0';
	}
	if(cnt==n){
		printf("No\n");
		return 0;
	}
	int tmp=0,flag=0;
	for(int i=0;i<n;i++){
			if(s[i]=='1'){
				if(flag){
					if(tmp>2 || tmp==0){
						printf("No\n");
						return 0;
					}
				}else{
					flag=1;
					if(tmp>=2){
						printf("No\n");
						return 0;
					}
				}
				tmp=0;
			}else tmp++;
	}
	if(tmp>=2) printf("No\n");
	else printf("Yes\n");
	return 0;
}
