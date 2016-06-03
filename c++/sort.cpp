#include<cstdio>

void solution(int A[], int N) {
    // write your code in C99 (gcc 4.8.2)
    int temp;
    for(int i=0;i<N;i++){
        for(int j=0;j<i;j++){
            if(A[i]<A[j]){
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    for(int i;i<5;i++){
      printf("%d",A[i]);
    }
}

int main(){
  int A[]={1, 3, 5, 3, 4};
  solution(A, 5);
  return 0;
}
