#include<bits/stdc++.h>
using namespace std;
int cmp(int a,int b){
	return a>b?1:0;
}
int main(){
	int n,s,c=0,f[5]={0},i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>s;
		f[s]++;
	}
	c+=f[4];
	if(f[3]>=f[1]){
		c+=f[3];
		c+=(f[2]+1)/2;
	}
	if(f[3]<f[1]){
		c+=f[3];
		f[1]-=f[3];
		c+=f[2]/2;
		f[2]%=2;
		if(f[2]==1){
			c+=(f[1]+1)/4+1;
		}
		if(f[2]==0){
			if(f[1]>=1){
				c+=(f[1]-1)/4+1;
			}
			if(f[1]==0){
				c+=0;
			}
		}
	} 
	cout<<c<<endl;
	return 0;
}
