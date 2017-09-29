#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int t=0,flag=0,f1=0;
	cin>>s;
	if(s[0]>='a'){
		flag=1;
		for(int i=1;i<s.length();i++){
			if(s[i]>='a'){
				flag=0;
				break;
			}
		}
	}else{
		f1=1;
		for(int i=1;i<s.length();i++){
			if(s[i]>='a'){
				f1=0;
				break;
			}
		}
	
	} 
	if(flag){
		s[0]-=32;
		for(int i=1;i<s.length();i++)
			s[i]+=32;
	}else if(f1){
		for(int i=0;i<s.length();i++)
			s[i]+=32;
	}
	cout<<s<<endl;
	return 0;
} 
