#include<iostream>  
#include<cstdio>  
#include<cstring>  
#include<map>
using namespace std;
int m,n,s;
string t[1001];
map<string,int> cou;
int main(){
	cin>>m>>n>>s;
	for(int i=0;i<m;i++){
		cin>>t[i];
		cou[t[i]]=0;
	}
	int flag=1;
	for(int i=s-1;i<m;){
		if(cou[t[i]]==0){
			flag=0;
			cout<<t[i]<<endl;
			cou[t[i]]=1;
			i+=n;
		}else{
			i+=1;
		}
	}
	if(flag){
		cout<<"Keep going..."<<endl;
	}
}
