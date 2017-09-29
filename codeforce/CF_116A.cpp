#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,max=-1,c=0,a,b;
	cin>>n;
	while(n--){
		cin>>a>>b;
		c-=a;
		c+=b;
		if(c>max)
			max=c;
	}
	cout<<max<<endl;
	return 0;
} 
