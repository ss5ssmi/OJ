#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s[1001]={0},t=0,a[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		if(s[i]>=s[i+1]){
			a[t++]=s[i];
		}
	}
	printf("%d\n",t);
	for(int i=0;i<t;i++){
		printf("%d",a[i]);
		if(i!=t-1) printf(" ");
	}
	return 0;
}
