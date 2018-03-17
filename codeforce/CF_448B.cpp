#include<bits/stdc++.h>
using namespace std;
int main() {
	string a,b;
	cin>>a>>b;
	for(int i=0,j=0,tt=b.length();i<a.length() && j<b.length();i++){
		if(a[i]==b[j]){
			j++;
			tt--;
		}
		if(tt==0){
			printf("automaton\n");
			return 0;
		}
	}
	int tmp=0;
	for(int i=0; i<b.length(); i++) {
		for(int j=0; j<a.length(); j++) {
			if(b[i]==a[j]){
				tmp++;
				a[j]='*';
				break;
			}
		}
	}
	if(tmp==b.length()){
		if(a.length()>b.length()) printf("both\n");
		else if(a.length()==b.length()) printf("array\n");
	}else{
		printf("need tree\n");
	}
	return 0;
}
