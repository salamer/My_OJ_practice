#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int flag = 1;
struct Node
{
    bool IsValue;
    int v;
    Node *left,*right;
    Node():IsValue(false),left(NULL),right(NULL){}
};

Node *root;
Node* newnode()
{
    return new Node();
}
void addnode(int v,char *s)
{
    int len = strlen(s);
    Node *u = root;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == 'L')
        {
          if(u->left == NULL)
               u->left = newnode();
           u = u->left;
       }
       else if(s[i] == 'R')
       {
           if(u->right == NULL)
               u->right = newnode();
           u = u->right;
       }
   }
   if(u->IsValue)
       flag = 0;
   u->v = v;
   u->IsValue = true;
}
char s[300];
bool read_input()
{
   flag = 1;
   root = newnode();
   while(1)
   {
       if(scanf("%s",s)!=1)
           return false;
       if(!strcmp(s,"()"))
           break;
       int v;
       sscanf(&s[1],"%d",&v);
       addnode(v, strchr(s,',')+1);
     }
     return true;
 }

 bool bfs(vector<int>& ans)
 {
     queue<Node*> q;
     ans.clear();
     q.push(root);
     while(!q.empty())
     {
       Node* u = q.front();
       q.pop();
       if(!u->IsValue)
           return false;
       ans.push_back(u->v);
       if(u->left != NULL)
           q.push(u->left);
       if(u->right != NULL)
           q.push(u->right);
   }
   return true;
}

int main()
{
   vector<int> ans;
   while(read_input())
   {
       if(!bfs(ans))
           flag = 0;
       if(flag==0)
           printf("not complete\n");
       else
       {
           for(int i = 0; i < ans.size(); i++)
           {
               if(i==ans.size()-1)
                   printf("%d\n",ans[i]);
               else
                   printf("%d ",ans[i]);
           }
         }
     }

     return 0;
 }
