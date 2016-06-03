#include <cstdio>

using namespace std;

#define NUM 100+10

int main(){
  int a[NUM]={0},n,j,key;
  scanf("%d",&n);
  for (int i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  for(int i=2;i<=n;i++){
    key=a[i];
    j=i-1;
    while(j>=1&&a[j]>key){
      a[j+1]=a[j];
      j=j-1;
    }
    a[j+1]=key;
  }
  for(int i=1;i<=n;i++){
    printf("%d ",a[i]);

  }
  return 0;
}
