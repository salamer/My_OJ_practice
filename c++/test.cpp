#include<cstdio>

int max=5;

int f(int* a){
  int n=0;
  while(n<max){
    printf("%d",a[n++]);
  }
  return 0;
}

int main(){
  int b[5]={1,2,3,4,5};

  f(b);
  int x=0,y=0;

  for(int i=-1;i<=1;i++){
    for(int j=-1;j<=1;j++){
      if(((i==0||j==0)&&!(i==0&&j==0))){
        printf("%d,%d\n",x+i,y+j);
      }
    }
  }
  return 0;
}
6 5 1 1 0 1 1 1 0 1 1 1 1 0 1 0 0 1 0 1 1 1 1 1 1 0 1 1 1 1 1 1 1
