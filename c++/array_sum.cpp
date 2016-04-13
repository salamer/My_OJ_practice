#include<cstdio>
#include<cmath>

using namespace std;

int main(){
  int m;
  float n;
  while(scanf("%f%d",&n,&m)==2){
    float res=0.0;
    for(int i=0;i<m;i++){
      res+=n;
      n=sqrt(n);
    }
    printf("%.2f\n",res);
  }
  return 0;
}
