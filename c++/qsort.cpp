#include <cstdio>

#define NUM 100+10

using namespace std;


int a[NUM],n;

void swap(int i,int j){
  int temp;
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}

int partition(int start,int end){
  int x=a[end];
  int i=start-1;
  for (int j=start;j<=end-1;j++){
    if (a[j]<x){
      i=i+1;
      swap(i,j);
    }
  }
  swap(i+1,end);
  printf("part:%d\n",a[i+1]);
  return i+1;
}

void qsort(int start,int end){
  if (start<end){
    for(int i=1;i<=n;i++){
      printf("%d ",a[i]);
    }
    printf("\n");
    int q=partition(start,end);

    qsort(start,q-1);
    qsort(q+1,end);
  }
}


int main(){

  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
    printf("%d ",a[i]);
  }
  printf("\n");
  qsort(1,n);
  for(int i=1;i<=n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
  return 0;
}
