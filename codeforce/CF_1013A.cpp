#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x[50],y[50],tx=0,ty=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x[i];
		tx+=x[i];
	}
	for(int i=0;i<n;i++){
		cin>>y[i];
		ty+=y[i];
	}
	if(tx>=ty) printf("Yes\n");
	else printf("No\n");
	return 0;
}
