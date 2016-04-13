#include <cstdio>

using namespace std;

bool bigger(int a,int b){
  return a>b;
}

bool smaller(int a,int b){
  return a<b;
}

int main(){
  int n;
  while(scanf("%d",&n)==1){
    float res;
    int a[100]={0},maxn=-101,maxc=0,minn=101,minc=0;
    float sum=0.0;
    for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
      if(bigger(a[i],maxn)){
        maxn=a[i];
        maxc=i;
      }
      if(smaller(a[i],minn)){
        minn=a[i];
        minc=i;
      }
    }
    a[minc]=0;
    a[maxc]=0;
    for(int i=0;i<n;i++){
      if(a[i]!=0){
        sum=sum+a[i];
      }
    }
    res=sum/(n-2);
    printf("%.2f\n",res);
  }
  return 0;
}
