#include <stdio.h>

int odd_or_not(int n){
  if(n%2!=0){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  int i,n,num,res;
  while(scanf("%d",&n)!=EOF){
    res=1;
    num=1;
    for(i=0;i<n;i++){
      scanf("%d",&num);
      if(odd_or_not(num)){

        res*=num;
      }
    }
    printf("%d\n",res);
  }
  return 0;
}
