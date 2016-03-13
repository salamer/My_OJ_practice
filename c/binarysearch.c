#include<stdio.h>
int search(int aim[],start,end,q){
  int i;
  if(start==end){
    if(q==aim[start]){
      printf("you found the right answer!");
      printf("it is in the %d",start);
    }
    else{
    printf("the input did not be found in the list");
    }
  }
  else{
    i=end/2;
    if q>aim[end]
      search(aim,end/2,end,q);
    else
      search(aim,start,end/2,q);
  }
}


int main(){
  int aim[1000],q,n;
  search(aim,0,n,q);
  return 0;
}
