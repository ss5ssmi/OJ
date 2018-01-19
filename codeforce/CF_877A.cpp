#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,n[5];
	n[0]="Danil",n[1]="Olya",n[2]="Slava",n[3]="Ann",n[4]="Nikita";
	cin>>s;
	int tmp=0;
	for(int i=0;i<=4;i++){
		int pos=s.find(n[i]);
		if(pos!=s.npos) tmp++; 
		if(s.find(n[i],pos+1)!=s.npos){
			printf("NO\n");
			return 0;
		}
	}
	if(tmp!=1) printf("NO\n");
	else printf("YES\n");
	return 0;
}
