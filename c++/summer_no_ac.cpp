#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

const int MAXN=100;

int max(int a,int b){
  if(a>b)
    return a;
  else
    return b;
}

int main(){
  int n;
  while(scanf("%d",&n)==1&&n){
    if(n==0)
      break;
    int x,y;
    int maxn=0;
    bool a[MAXN][MAXN];
    int f[MAXN]={0};
    memset(a,false,sizeof(a));
    for(int i=0;i<n;i++){
      scanf("%d %d",&x,&y);
      a[x][y]=true;
      maxn=max(maxn,y);
    }

    for(int i=1;i<=maxn;i++){
      f[i]=f[i-1];
      for(int j=0;j<i;j++){
        if(a[j][i]){
          f[i]=max(f[i],f[j]+1);
        }
      }
    }
    printf("%d\n",f[maxn]);
  }
  return 0;
}
