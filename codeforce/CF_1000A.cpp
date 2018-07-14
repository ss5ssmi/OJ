#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string p[100],c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=0;i<n;i++){
		cin>>c;
		for(int j=0;j<n;j++){
			if(p[j]==c){
				p[j]="";
				break;
			}
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		if(p[i]!="") cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}
