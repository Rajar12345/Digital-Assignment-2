#include<stdio.h>
int rec(int n);
int main()
{
    int n,res=0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        res+=rec(i);
    }
    printf("%d\n",res);
    return 0;
}
int rec(int n){
    if(n>1){
        return n*rec(n-1);
    }
    else{
        return 1;
    }
}