#include<bits/stdc++.h>
using namespace std;
int a[51][51],n;
bool find(int x,int y){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=x && j!=y){
				int t=a[i][y]+a[x][j];
				if(t==a[x][y]) return 1;
			}
		}
	}
	return 0;
}
int main() {
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	} 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(!find(i,j) && a[i][j]!=1){
				printf("No\n");
				return 0;
			}
		}
	}
	printf("Yes\n");
	return 0;
}
