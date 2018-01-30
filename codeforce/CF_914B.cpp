#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,t,a[100001]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		a[t]++;
	}
	for(int i=0;i<100001;i++){
		if(a[i]%2==1) {printf("Conan\n");return 0;} 
	}
	printf("Agasa\n");
	return 0;
}
