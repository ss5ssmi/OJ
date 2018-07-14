#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,s[10],a=0,b=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		b+=s[i];
	}
	int t[10]={0},j=0;
	for(int i=0;i<n;i++){
		b-=s[i];
		a+=s[i];
		t[j++]=i+1;
		if(a!=b && a && b){
			goto ans;
		}
	}
	printf("-1\n");
	return 0;
	ans:
	printf("%d\n",j);
	for(int i=0;i<j;i++){
		printf("%d",t[i]);
		if(i!=j-1) printf(" ");
	}
	return 0;
}
