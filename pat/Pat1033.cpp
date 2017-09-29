#include<stdio.h>
#include<string.h>
int main(){
  char b[100000],p[100000];
  int flag=0;
  gets(b);
  gets(p);
  if(strlen(b)==0){
    printf("%s\n",p);
    return 0;
  }
  for(int i=0;i<strlen(b);i++){
    if(b[i]=='+'){
      flag=1;
    }else if(b[i]>='A'&&b[i]<='Z'){
      b[i]+=32;
    }
  }
  if(flag){
    for(int i=0;i<strlen(p);i++){
      if(p[i]>='A'&&p[i]<='Z'){
        p[i]='#';
      }
    }
  }
  for(int i=0;i<strlen(p);i++){
    for(int j=0;j<strlen(b);j++){
      if(p[i]==b[j]){
        p[i]='#';
      }else if(p[i]==b[j]-32){
        p[i]='#';
      }
    }
  }
  for(int i=0;i<strlen(p);i++){
    if(p[i]!='#'){
      printf("%c",p[i]);
    }
  }
  return 0;
}
