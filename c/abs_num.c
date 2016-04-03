#include <stdio.h>
#include <stdlib.h>
int main(){
  double num;
  while(scanf("%lf",&num)!=EOF){
    if(num>0){
      printf("%.2f\n",num);
    }
    else{
      printf("%.2f\n",-num);
    }
  }
  return 0;
}
