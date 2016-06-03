#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
#define MAXN 1010
char a[MAXN],b[MAXN];
int dp[MAXN][MAXN];
int main()
{
  scanf("%s %s",a+1,b+1);
  int lena=strlen(a+1);
  int lenb=strlen(b+1);
  for(int i=1;i<=lena;i++)
    for(int j=1;j<=lenb;j++)
    {
      dp[i][j]=max(dp[i][j],max(dp[i-1][j],dp[i][j-1]));
      dp[i][j]=dp[i-1][j-1]+((a[i]==b[j])?1:0);
    }
    printf("%d\n",dp[lena][lenb]);
    return 0;
}
