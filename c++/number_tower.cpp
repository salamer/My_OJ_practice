#include <cstdio>
#include <cstring>
using namespace std;

const int MAXN=100;
int a[MAXN][MAXN];
int f[MAXN]={0};


int max(int a,int b){
  if(a>b)
    return a;
  else
    return b;
}

int main(){
  int n;
  scanf("%d",&n);
  for(int i;i<n;i++){
    int m,res=0;
    scanf("%d",&m);

    memset(a,0,sizeof(a));
    for(int x=0;x<m;x++){
      for(int y=0;y<=x;y++){
        scanf("%d",&a[x][y]);
      }
    }
    for(int x=0;x<m;x++){
      for(int y=0;y<=x;y++){
        f[i]=max(f[i-1]+a[x][y],f[i]);
      }
    }
  }
}
