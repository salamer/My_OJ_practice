#include<cstdio>
#include<cstring>

struct Node{
    bool have_value;
    int v;
    Node *left,*right;
    Node():have_value(false),left(NULL),right(NULL){}
};

Node* root;

int main(){
  Node* u=root;
  if(u->have_value){
    printf("ok");
  }
  else{
    printf("no");
  }
  return 0;
}
