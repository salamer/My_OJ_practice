#include<stdio.h>

int main(){
  int j,i=0,a[100],n;
  scanf("%d",&n);
  while(n!=0){
    a[i++]=n%2;
    n=n/2;
  }
  for(j=i-1;j>=0;j--){
    printf("%d",a[j]);
  }
  return 0;
}
