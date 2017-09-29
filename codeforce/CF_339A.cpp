#include<bits/stdc++.h>
using namespace std; 
int main(){
	char a[100];
	int b[100]={0},j=0;
	cin>>a;
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='0' && a[i]<='9'){
			b[j++]=a[i]-'0';
		}
	}
	sort(b,b+j);
	for(int i=0;i<j;i++){
		cout<<b[i];
		if(i!=j-1){
			cout<<'+';
		}
	}
	
	return 0;
}
