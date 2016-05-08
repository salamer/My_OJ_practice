#include<cstdio>

using namespace std;

void search(int a[],int start,int end,int target){
  if(end-start==1){
    printf("NO ANSWER\n");

  }
  else{
    int m;
    m=start+(end-start)/2;
    if(a[m]==target){
      printf("FIND THE VALUE IN THE LIST\n");

    }
    else{
      if(target>a[m]){
        search(a,m,end,target);
      }
      else{
        search(a,start,m,target);
      }
    }
  }

}

int main(){
    int n,target;
    int a[1000]={0};
    scanf("%d %d",&n,&target);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    search(a,1,n,target);
    return 0;
}
