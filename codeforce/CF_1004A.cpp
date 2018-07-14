#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,d,s[100],t=2;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n-1;i++){
		if((s[i+1]-s[i]) > 2*d){
			t+=2;
		}else if((s[i+1]-s[i]) == 2*d){
			t++;
		} 
	}
	printf("%d\n",t);
	return 0;
}
