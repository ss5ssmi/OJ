#include<iostream>
using namespace std;
int max(int a,int b){return a>b?a:b;}
int main(){
	int t, a, b, x, y;
	cin>>t;
	while(t--){
		cin>>a>>b>>x>>y;
		x+=1, y+=1;
		int a1 = (a-x) * b, a2 = (x-1) * b, a3 = a * (b-y), a4 = a * (y-1);
		cout<< max( max( max(a1, a2), a3), a4) << endl;
	}
	return 0;
}
