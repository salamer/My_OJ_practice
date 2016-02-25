#include<stdio.h>

int max(int a,int b){
  if(a>b)
    return a;
  else
    return b;
}

int main(){
  int n,i,j,a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int f[100][100];
  for(i=0;i<100;i++)
  {
    for(j=0;j<100;j++)
    {
      f[i][j]=0;
    }
  }
  int maxn=0;
  for(i=1;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      if(a[i]>a[j]){
        f[i][j]=max(f[i-1][j]+1,f[i][j]);
        if(maxn<f[i][j])
        {
          maxn=f[i][j];
        }
      }

    }
  }
  printf("%d\n",maxn);
  return 0;
}
