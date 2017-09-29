#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,sum;
	int s[100000]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n);
	sum=(s[0]+s[1])/2;
	for(int i=2;i<n;i++){
		sum=(sum+s[i])/2;
	}
	printf("%d\n",sum);
	return 0;
} 
