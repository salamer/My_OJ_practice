#include <cstdio>

#define NUM 100+10

using namespace std;


int a[NUM],n;

int qsort(int start,int end){
  q=partition(start,end);
  qsort(start,q-1);
  qsort(q+1,end);
}

int partition(int start,int end){
  
}

int main(){

  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    printf("%d "a[i]);
  }
  printf("\n");


}
