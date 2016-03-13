#include<stdio.h>
#include<stdlib.h>
int max(int a,int b){
  if(a>b)
    return a;
  else
    return b;
}

int main()
{
  int a[100]={0};
  int i,j;
  int n=0,res=0;
  int f[100];


  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    f[i]=1;
  }
  for(i=0;i<n;i++){
    for(j=0;j<i;j++){
      if(a[i]>a[j]){
        f[i]=max(f[i],f[j]+1);
      }
    }
    res=max(res,f[i]);
  }
  printf("%d",res);
  return 0;
}
