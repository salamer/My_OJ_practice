#include <cstdio>

using namespace std;

int main(){
  int a,b;
  while(scanf("%d%d",&a,&b)==2){
    if(a==b){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
