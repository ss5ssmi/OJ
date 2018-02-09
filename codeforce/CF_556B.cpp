#include<bits/stdc++.h>
using namespace std;
int n,s[1000],t[1000];
void button(){
	for(int i=0;i<n;i++){
		if(i%2==0) s[i]++;
		else s[i]--;
		if(s[i]>n-1) s[i]=0;
		if(s[i]<0) s[i]=n-1;
	}
}
int main() {
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		t[i]=i;
	}
	for(int i=0;i<n;i++){
		int flag=1;
		for(int j=0;j<n;j++){
			if(s[j]!=t[j]) {flag=0;break;} 
		}
		if(flag) {printf("YES\n");return 0;} 
		else button();
	}
	printf("NO\n");
	return 0;
}
