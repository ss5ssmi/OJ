#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,a,b,c,n;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>n;
		int s[3] = {a,b,c};
		sort(s,s+3);
		int dis = abs(s[2]-s[0]) + abs(s[2]-s[1]);
		n-=dis;
		if(n>=0 && n%3==0) printf("YES\n");
		else printf("NO\n"); 
	}
	return 0;
} 
