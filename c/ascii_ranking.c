#include<stdio.h>
#include<stdlib.h>

int main(){
  char a[3];
  char temp;
  int i,j;
  while(gets(a)){
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        if(a[i]<a[j]){
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
        }
      }
    }
    printf("%c %c %c\n",a[0],a[1],a[2]);
  }
  return 0;
}
