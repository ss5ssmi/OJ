#include<iostream>
#include<algorithm>
using namespace std;
int zheng(int a){
	int n=0;
	while(a){
		n+=a%10;
		a/=10;
	}
	return n;
}
int main(){
	int n,t=0;
	int f[10000]={0};
	int s[10000]={0};
	cin>>n; 
	for(int i=0;i<n;i++){
		cin>>f[i];
	}
	for(int i=0;i<n;i++){
		s[i]=zheng(f[i]);
	}
	sort(s,s+n);
	for(int i=1;i<10000;i++){
		if(s[i]!=s[i-1]){
			t++;
		}
	}
	printf("%d\n%d",t,s[0]);
	for(int i=1;i<10000;i++){
		if(s[i]>0&&s[i]!=s[i-1]){
			printf(" %d",s[i]);
		}
	}
	return 0;
}
