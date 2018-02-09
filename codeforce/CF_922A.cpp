#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,tx=0,ty=1;
	cin>>x>>y;
	while(ty<y){
		ty++;
		tx++;
	}
	while(tx && tx<x){
		tx+=2;
	}
	if(x!=tx || y!=ty) printf("No\n");
	else printf("Yes\n");
	return 0;
}
