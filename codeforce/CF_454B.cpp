#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[100000],minn=1e9,t,flag=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(s[i]<minn || (s[i]==minn && flag)){
			t=i;
			minn=s[i];
			flag=0;
		} else if(s[i]>minn){
			flag=1;
		}
	}
	for(int i=1;i<n;i++){
		if(minn > s[(i+t)%n]){
			printf("-1\n");
			return 0;
		}
		minn=s[(i+t)%n];
	}
	printf("%d\n",t==0?0:n-t);
	return 0;
}
