#include<iostream> 
using namespace std;
int main(){
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	string k1,k2,k3,k4;
	int flag=0,l1,l2;
	cin>>k1>>k2>>k3>>k4;
	l1=k1.length()>k2.length()?k2.length():k1.length();
	l2=k3.length()>k4.length()?k4.length():k3.length();
	for(int i=0;i<l1;i++){
		if(flag==0&&k1[i]==k2[i]&&(k1[i]>=65&&k1[i]<=71)){
			cout<<week[k1[i]-65]<<" ";
			i++;
			flag=1;
		}
		if(flag==1&&k1[i]==k2[i]){
			if(k1[i]>='0'&&k1[i]<='9'){
				cout<<"0"<<k1[i]-'0'<<":";
				break;
			}
			if(k1[i]>='A'&&k1[i]<='N'){
				cout<<k1[i]-65+10<<":";
				break;
			}
		}
	}
	for(int i=0;i<l2;i++){
		if(k3[i]==k4[i]&&((k3[i]>=65&&k3[i]<=90)||(k3[i]>=97&&k3[i]<=122))){
			if(i<=9){
				cout<<"0"<<i<<endl;
				break;
			}else{
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}
