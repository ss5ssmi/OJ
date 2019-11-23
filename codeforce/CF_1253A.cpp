#include<string>
#include<iostream>
using namespace std;
string cal(int a[], int b[],int n){
	int t = 0,flag = 0;
	for(int i=0;i<n;i++){
		if(a[i] <= b[i]){
			int tmp = b[i] - a[i];
			if(tmp != t && flag == 0){
				t = tmp;
				flag = 1;
			}else if(flag == 1){
				if(tmp == 0 || tmp == t) t = tmp; 
				else return "NO";
			}
		}else{
			return "NO";
		}
	}
	return "YES";
}
int main(){
	int t,n,a[100000],b[100000];
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		cout<<cal(a,b,n)<<endl;
	}
	return 0;
}

