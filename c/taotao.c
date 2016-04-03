#include<stdio.h>
#include<stdlib.h>

int main(){
    int m,res=0,n,i;
    int a[100]={0};
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<m){
            res++;
        }
    } 
    printf("%d",res);
    return 0;
}