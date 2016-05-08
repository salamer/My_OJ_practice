#include <cstdio>

struct Node{
  int value;
  Node *left,*right;
};

int main(){
  struct Node node,node1,node2;
  node.value=0;
  node1.value=1;
  node2.value=2;
  node.left=&node1;
  node.right=&node2;
  printf("%d",node->left);
  return 0;
}
