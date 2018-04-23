#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,s[200000],sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		sum+=s[i];
	}
	int tmp=0,half=sum%2==0?sum/2:sum/2+1;
	for(int i=0;i<n;i++){
		tmp+=s[i];
		if(tmp>=half){
			printf("%d\n",i+1);
			break;
		}
	}
	return 0;
}
