#include<iostream>
using namespace std;
long long con(int len, int n){
	long long t = 0;
	while(len--){
		t = t * 10 + n;
	}
	return t;
}
int cal(int n){
	int len = 0; 
	for(int i=1;i<11;i++){
		for(int j=1;j<10;j++){
			long long val = con(i,j);
			len ++;
			if(val > n) return len - 1;
			else if(val == n) return len;
		}
	}
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin>>n;
		cout << cal(n) << endl;	
	}
}
