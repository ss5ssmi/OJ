#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a[100],p1=1,p2=2,w=3;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==p1){
			swap(p2,w);
		}else if(a[i]==p2){
			swap(p1,w);
		}else{
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
