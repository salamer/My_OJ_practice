#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

struct node{
  int value;
  node *left,*right;
};

int main(){
//  char a[100],b[100];
  struct node temp={10,NULL,NULL};
  struct node *seg=&temp;
  for(int i=0;i<5;i++){
    struct node the_node={i,&temp};
    temp=the_node;
  }
  for(int i=0;i<5;i++){
    printf("%i:%d\n",i,seg->value);
    seg=seg->left;
  }
//  scanf("%s %s",a,b);
//  printf("%s\n%s\n",a,b);
//  printf("%lu",strlen(a));
  return 0;
}
