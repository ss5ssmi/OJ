#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,k,s[100010];
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		if(sum+i<k){
			sum+=i;
		}else{
			break;
		}
	}
	cout<<s[k-sum];
	return 0;
}
