#include<bits/stdc++.h>
using namespace std;
int main() {
	string s[10]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	string g[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	string l[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	int n;
	scanf("%d",&n);
	if(n<10){
		cout<<g[n]<<endl;
	} else if(n<20){
		cout<<l[n-10]<<endl;
	}else {
		int shi=n/10,ge=n%10;
		if(ge!=0)
			cout<<s[shi]<<"-"<<g[ge]<<endl;
		else
			cout<<s[shi]<<endl;
	}
	return 0;
}
