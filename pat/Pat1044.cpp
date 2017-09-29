#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string b[13]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	string a[13]={"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	int n,d=0;
	string c;
	scanf("%d",&n);
	while(n--){
		scanf("%s",&c);
		if(c[0]>='0'&&c[0]<='9'){
			for(int i=0;i<strlen(c);i++){
				d=d*10+c[i];
			}
			printf("%d\n");
		}
	}
	return 0;
}
