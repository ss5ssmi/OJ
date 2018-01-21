#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x,s[110],t[101]={0};
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>s[i];
		t[s[i]]++;
	}
	int tmp=0,flag=0;
	for(int i=0;i<=x;i++){
		for(int j=0;j<n;j++){
			if(s[j]==x){
				flag=1;
			}
			if(s[j]==i && s[j]!=x){
				tmp++;
				break;
			}
		}
	}
	if(tmp==x) printf("%d\n",flag?1:0);
	else printf("%d\n",x-tmp+flag);
	return 0;
}
