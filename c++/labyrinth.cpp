#include<cstdio>
#include<cstring>
using namespace std;

const int MAXN=100;

int lab[MAXN][MAXN],idx[MAXN][MAXN];
int n,m;

int dfs(int x,int y,int score,int last_x,int last_y){
    idx[x][y]=score+1;
    if(x==0&&y==m-1){
        printf("%d",score);
        return 0;
    }
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if(((i==0||j==0)&&!(i==0&&j==0))&&x+i>=0&&x+i<n&&y+j>=0&&y+j<m&&lab[x+i][y+j]!=0&&idx[x+i][y+j]<idx[x][y]&&!(x+i==last_x&&y+j==last_y)){
                dfs(x+i,y+j,idx[x][y],x,y);
            }
        }
    }
    return 0;
}

int main(){

  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d ",&lab[i][j]);
    }
  }
  memset(idx,0,sizeof(int));
  dfs(1,0,0,0,0);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%d",idx[i][j]);
    }
    printf("\n");
  }
  return 0;
}
