#include<bits/stdc++.h>
using namespace std;
int n,m;
char s[52][52];
int find(){
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int f=0,a=0,c=0,e=0;
			for(int k=i;k<i+2;k++){
				for(int l=j;l<j+2;l++){
					if(s[k][l]=='f') f++;
					if(s[k][l]=='a') a++;
					if(s[k][l]=='c') c++;
					if(s[k][l]=='e') e++;
				}
			}
			if(f && a && c && e) sum++;
		}
	}
	return sum;
}
int main() {
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	cout<<find();
	return 0;
}
